#include "server.h"

server::server() {

    if (this->listen(QHostAddress::Any, 2222))
    {
        qDebug() << "start";
    }
    else
    {
        qDebug() << "ERROR";
    }
    nextBlockSize = 0;
}

void server::incomingConnection(qintptr socketDescriptor)
{
    socket = new QTcpSocket;
    socket->setSocketDescriptor(socketDescriptor);
    connect(socket, &QTcpSocket::readyRead, this, &server::slotReadyRead);
    connect(socket, &QTcpSocket::disconnected, socket, &QTcpSocket::deleteLater);

    Sockets.push_back(socket);
    qDebug() << "client connected" << socketDescriptor;
}

void server::slotReadyRead()
{
    socket = (QTcpSocket*)sender();
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_6_2);

    if (in.status() == QDataStream::Ok)
    {
        qDebug() << "read...";
       /* QString str;
        in >> str;
        qDebug() << str;
        SendToClient(str);*/
        for (;;)
        {
            if (nextBlockSize == 0)
            {
                qDebug() << "nextBlockSize = 0";
                if (socket->bytesAvailable() < 2)
                {
                    qDebug() << "Data < 2, break";
                    break;
                }
                in >> nextBlockSize;
                qDebug() << "nextBlockSize = " << nextBlockSize;
            }
            if (socket->bytesAvailable() < nextBlockSize)
            {
                qDebug() << "Data not full, break";
                break;
            }

            QString str;
            QTime time;
            in >> time >> str;
            nextBlockSize = 0;
            qDebug() << str;
            SendToClient(str);
            socketDescriptor();
            break;
        }
    }
    else
    {
        qDebug() << "DataStream ERROR";
    }
}


void server::SendToClient(QString str)
{
    Data.clear();
    QDataStream out(&Data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_2);
    out << quint16(0) << QTime::currentTime() << str;
    out.device()->seek(0);
    out << quint16(Data.size() - sizeof(quint16));
    //socket->write(Data);


    for (int i =0; i < Sockets.size(); i++)
    {
        Sockets[i]->write(Data);
    }
}
