#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connetct Database
    DB_Connection = QSqlDatabase::addDatabase("QSQLITE");
    DB_Connection.setDatabaseName(QCoreApplication::applicationDirPath() + "/testdb.db");
    if (DB_Connection.open())
    {
        qDebug() << "Database Is Connected";
    }
    else
    {
        qDebug() << "Database Is Not Connected";
        qDebug() << "ERROR" << DB_Connection.lastError();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Update_clicked()
{
    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryInsertData(DB_Connection);
    QueryInsertData.prepare("INSERT INTO StudentGrupObject(StudentId,FristnameStudent,LastnameStudent,SurnameStudent,GrupName,NumberGrup,Physics,Mathematics) VALUES(:StudentId,:FristnameStudent,:LastnameStudent,:SurnameStudent,:GrupName,:NumberGrup,:Physics,:Mathematics)");
    QueryInsertData.bindValue(":StudentId", ui->lineEdit->text());
    QueryInsertData.bindValue(":FristnameStudent", ui->lineEdit_2->text());
    QueryInsertData.bindValue(":LastnameStudent", ui->lineEdit_3->text());
    QueryInsertData.bindValue(":SurnameStudent", ui->lineEdit_4->text());
    QueryInsertData.bindValue(":GrupName", ui->lineEdit_5->text());
    QueryInsertData.bindValue(":NumberGrup", ui->lineEdit_6->text());
    QueryInsertData.bindValue(":Physics", ui->lineEdit_7->text());
    QueryInsertData.bindValue(":Mathematics", ui->lineEdit_8->text());
    QueryInsertData.exec();

    QSqlDatabase::database().commit();
    DB_Connection.close();
}


void MainWindow::on_pushButton_Upd_clicked()
{
    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryUpdateData(DB_Connection);
    QueryUpdateData.prepare("UPDATE StudentGrupObject SET FristnameStudent=:FristnameStudent,LastnameStudent=:LastnameStudent,SurnameStudent=:SurnameStudent,GrupName=:GrupName,NumberGrup=:NumberGrup,Physics=:Physics,Mathematics=:Mathematics WHERE StudentId=:StudentId");
    QueryUpdateData.bindValue(":FristnameStudent", ui->lineEdit_2->text());
    QueryUpdateData.bindValue(":LastnameStudent", ui->lineEdit_3->text());
    QueryUpdateData.bindValue(":SurnameStudent", ui->lineEdit_4->text());
    QueryUpdateData.bindValue(":GrupName", ui->lineEdit_5->text());
    QueryUpdateData.bindValue(":NumberGrup", ui->lineEdit_6->text());
    QueryUpdateData.bindValue(":Physics", ui->lineEdit_7->text());
    QueryUpdateData.bindValue(":Mathematics", ui->lineEdit_8->text());
    QueryUpdateData.bindValue(":StudentId", ui->lineEdit->text());
    QueryUpdateData.exec();

    qDebug() << "UPDATE ERROR" << QueryUpdateData.lastError();

    QSqlDatabase::database().commit();
    DB_Connection.close();
}


void MainWindow::on_pushButton_Delete_clicked()
{
    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryDeleteData(DB_Connection);

    QSqlDatabase::database().commit();
    QueryDeleteData.prepare("DELETE FROM StudentGrupObject WHERE StudentId=:StudentId");
    QueryDeleteData.bindValue(":StudentId", ui->lineEdit->text());
    QueryDeleteData.exec();

    QSqlDatabase::database().commit();
    DB_Connection.close();
}


void MainWindow::on_pushButton_Show_clicked()
{
    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryLoadData(DB_Connection);
    QueryLoadData.prepare("SELECT * FROM StudentGrupObject");
    int NumberOfRowsToDisplay = 10;
    if (QueryLoadData.exec())
    {
        ui->tableWidget->setRowCount(NumberOfRowsToDisplay);
        int RowNumber = 0;
        while (QueryLoadData.next())
        {
            ui->tableWidget->setItem(RowNumber, 0, new QTableWidgetItem(QString(QueryLoadData.value("StudentId").toString())));
            ui->tableWidget->setItem(RowNumber, 1, new QTableWidgetItem(QString(QueryLoadData.value("FristnameStudent").toString())));
            ui->tableWidget->setItem(RowNumber, 2, new QTableWidgetItem(QString(QueryLoadData.value("LastnameStudent").toString())));
            ui->tableWidget->setItem(RowNumber, 3, new QTableWidgetItem(QString(QueryLoadData.value("SurnameStudent").toString())));
            ui->tableWidget->setItem(RowNumber, 4, new QTableWidgetItem(QString(QueryLoadData.value("GrupName").toString())));
            ui->tableWidget->setItem(RowNumber, 5, new QTableWidgetItem(QString(QueryLoadData.value("NumberGrup").toString())));
            ui->tableWidget->setItem(RowNumber, 6, new QTableWidgetItem(QString(QueryLoadData.value("Physics").toString())));
            ui->tableWidget->setItem(RowNumber, 7, new QTableWidgetItem(QString(QueryLoadData.value("Mathematics").toString())));
            RowNumber = RowNumber + 1;
        }
    }

    QSqlDatabase::database().commit();
    DB_Connection.close();
}

