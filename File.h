#ifndef FILE_H
#define FILE_H

#include <QFile>
#include <QDebug>
#include <QDir>
#include <QObject>
#include <QThread>
#include <QMessageBox>
class File : public QObject
{
Q_OBJECT

public slots:
    void Save(QString path, QString data){

        QFile file(path);

        if (file.open(QIODevice::WriteOnly | QIODevice::Text)){
            QTextStream writeStream(&file);
            writeStream << data;
            file.close();
        }
    }

public:
    QString Take(QString path) {

        QFile file(path);

        if (file.open(QIODevice::ReadOnly)) {
            QByteArray data;
            data = file.readAll();
            file.close();
            QString str_return;
            str_return.prepend(data);
            return str_return;
        }
        return nullptr;
    }
};

class Worker : public QObject {
    Q_OBJECT
    File* work;
public:
    QString path;
    QString data;

signals:
    void finished_worker(bool);

public slots:
    void process() {

        work = new File();

        if(work == nullptr) {
            emit finished_worker(false);
            return;
        }
        work->Save(path, data);
        emit finished_worker(true);
    }
};


class Controller : public QObject{
    Q_OBJECT
public:
    void makeThread(QString path, QString data){
        QThread* thread = new QThread();

        Worker* worker = new Worker();
        worker->path = path;
        worker->data = data;

        worker->moveToThread(thread);

        connect(thread, &QThread::started, worker, &Worker::process);
        connect(worker, &Worker::finished_worker, this, [](bool state){
            if(state){}
        });

        connect(worker, &Worker::finished_worker, thread, &QThread::quit);
        connect(worker, &Worker::finished_worker, worker, &QObject::deleteLater);
        connect(thread, &QThread::finished, thread, &QObject::deleteLater);

        thread->start();
    }
};

#endif // FILE_H


