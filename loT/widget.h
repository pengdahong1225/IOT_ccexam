#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QSqlDatabase>
#include<QLCDNumber>
#include<QTimer>
#include<QTime>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    int connect_mysql();
    void Calculate_time();
    QString enter_id;
    QString enter_name;
    QTime total_time;
    int H;
    int M;
    int S;
    bool bPressFlag;
    QPoint beginDrag;
signals:
    void Verified_Success();
public slots:
    void pbn_login();
    void _begin_test();
    void on_timeout();
private slots:
    void mousePressEvent(QMouseEvent *e);//鼠标点击事件
    void mouseMoveEvent(QMouseEvent *e);//鼠标移动事件
    void mouseReleaseEvent(QMouseEvent *e);//鼠标释放事件
private:
    Ui::Widget *ui;
    bool is_open;
    QSqlDatabase db;
    QLCDNumber *lcd;
    QTimer *timer;
};

#endif // WIDGET_H
