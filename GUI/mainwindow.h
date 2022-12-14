#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QListWidgetItem>
#include <QMainWindow>
#include <QMouseEvent>
#include <QToolButton>
#include <QPropertyAnimation>
#include <QSize>
#include <QDateTime>
#include <QDebug>

#include "chatmessage/qnchatmessage.h"
#include "Network/tcpclient.h"
#include "Entity/chatmsg.h"
#include "Entity/userinfo.h"
#include "Entity/friendlist.h"
#include "GUI/chooseadd.h"
#include "GUI/addfriend.h"
#include "GUI/addgroup.h"
#include "GUI/addfail.h"
#include "GUI/addsuccess.h"




namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = 0, int id = 0, QString name = "");
    ~MainWindow();

    int i = 0;

    void show_sendMessage(QString content);
    void show_recvMessage(QString content);
    void show_message(ChatMsg msg, QNChatMessage::User_Type type);

    void dealMessage(QNChatMessage* messageW, QListWidgetItem* item, QString text, QString time, QNChatMessage::User_Type type);
    void dealMessageTime(QString curMsgTime);
    void sendIDToServer(UserInfo tmp_user);

    void LinkToFriend(qint32 ID);//通过ID连接到好友
    void SaveChatToLocal(int Fd_ID ,ChatMsg msg);//存储聊天记录到本地,初步想法是不同好友编一个txt文件，文件命名为好友的ID
    void ShowChatToWindow(int Fd_ID);//在点击好友时，打开本地的记录好友聊天的文件，将其转化为ChatMsg，之后再输出
    void LinkToServer();

    void shakeWindow();

    void sendMsg(ChatMsg msg);

    //    void SaveGroupChat(int Gp_ID, ChatMsg msg);//存储群聊天记录到本地
    //    void ShowGroupChat(int Gp_ID);//点击群聊显示群聊的聊天记录，将其转化为ChatMsg，之后再输出

    ChatMsg mymsg;   //记录收集到的和使用的chatmsg
    int Friend_ID = 0;
    int My_ID = 0;
    QString My_name;
    int Chat_type = 1;   //判断聊天类型

protected:
    void resizeEvent(QResizeEvent* event);

    void mousePressEvent(QMouseEvent* event);

    void mouseMoveEvent(QMouseEvent* event);

private slots:
    void on_pushButton_clicked();

    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

    void on_settingButton_clicked();

    void on_singleButton_clicked();

    void on_moreButton_clicked();

    void recvMsg();

    void on_shakebtn_clicked();

    void on_FixHeadbtn_clicked();

    void on_friendList_itemClicked(QListWidgetItem *item);
    void on_friendList_itemDoubleClicked(QListWidgetItem *item);

public slots:
    void recvFromChooseAdd(int tag);//0个人，1群聊

    void getFriendName(QString name);

    void sendServerGroup(QString GroupID);

private:
    Ui::MainWindow* ui;
    TcpClient* myclient = 0; //记录本地服务器socket
    QPoint m_point;
    QPropertyAnimation *pShakeAnimation= nullptr;

    chooseadd* chooseUI;//方便记录
    addfriend* afriendUI;
    addgroup* agroupUI;

};

#endif // MAINWINDOW_H
