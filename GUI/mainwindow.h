#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QMouseEvent>
#include "chatmessage/qnchatmessage.h"
#include "Network/tcpclient.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void dealMessage(QNChatMessage *messageW, QListWidgetItem *item, QString text, QString time, QNChatMessage::User_Type type);
    void dealMessageTime(QString curMsgTime);
protected:
    void resizeEvent(QResizeEvent *event);

    void mousePressEvent(QMouseEvent *event);

    void mouseMoveEvent(QMouseEvent *event);

private slots:
    void on_pushButton_clicked();


    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

    void on_settingButton_clicked();

    void on_singleButton_clicked();

    void on_moreButton_clicked();

private:
    Ui::MainWindow *ui;
    TcpClient *myclient; //记录本地服务器socket
    QPoint m_point;
};

#endif // MAINWINDOW_H
