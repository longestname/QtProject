#-------------------------------------------------
#
# Project created by QtCreator 2022-08-18T20:27:08
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Login
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp \
    chatmessage/qnchatmessage.cpp \
    GUI/mainwindow.cpp \
    GUI/login.cpp \
    GUI/register.cpp \
    Entity/chatmsg.cpp \
    Entity/userinfo.cpp \
    GUI/testui.cpp \
    GUI/addfriend.cpp \
    GUI/addgroup.cpp \
    GUI/addsuccess.cpp \
    GUI/chooseadd.cpp \
    Network/tcpclient.cpp \
    Entity/added_friend.cpp \
    Entity/added_group.cpp \
    Entity/friendlist.cpp \
    Entity/grouplist.cpp \
    GUI/addfail.cpp

HEADERS  += \
    chatmessage/qnchatmessage.h \
    GUI/mainwindow.h \
    GUI/login.h \
    GUI/register.h \
    Entity/chatmsg.h \
    Entity/msgtype.h \
    Entity/userinfo.h \
    GUI/testui.h \
    GUI/addfriend.h \
    GUI/addgroup.h \
    GUI/addsuccess.h \
    GUI/chooseadd.h \
    Network/tcpclient.h \
    Entity/added_friend.h \
    Entity/added_group.h \
    Entity/friendlist.h \
    Entity/grouplist.h \
    GUI/addfail.h

FORMS    += \
    GUI/mainwindow.ui \
    GUI/login.ui \
    GUI/register.ui \
    GUI/testui.ui \
    GUI/addfriend.ui \
    GUI/addgroup.ui \
    GUI/addsuccess.ui \
    GUI/chooseadd.ui \
    GUI/addfail.ui

RESOURCES += \
    images.qrc

DISTFILES +=
