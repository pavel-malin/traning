#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Update_clicked();

    void on_pushButton_Upd_clicked();

    void on_pushButton_Delete_clicked();

    void on_pushButton_Show_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase DB_Connection;
};
#endif // MAINWINDOW_H
