#ifndef ADDFRIEND_H
#define ADDFRIEND_H

#include <QWidget>

#include "GUI/addsuccess.h"
#include "Entity/friendlist.h"
#include "Entity/added_friend.h"

namespace Ui {
class addfriend;
}

class addfriend : public QWidget
{
    Q_OBJECT

public:
    explicit addfriend(QWidget *parent = 0);
    ~addfriend();
    friendlist frdlst;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();


signals:
    void sendFriendSig(QString friendName);

private:
    Ui::addfriend *ui;

};

#endif // ADDFRIEND_H
