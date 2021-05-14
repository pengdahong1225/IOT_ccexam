#include "widget.h"
#include "ui_widget.h"
#include<QUrl>
#include<QDesktopServices>
#include<QMessageBox>
#include<QPixmap>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlError>
#include<QTime>
#include<QProcess>
#include<QDir>
#include<QMouseEvent>

static QString G_name = QString();
static QString G_id = QString();
static QString G_class = QString();
static QString G_passwd = QString();

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("物联网实验室考核"));
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::MSWindowsFixedSizeDialogHint);

    QPalette PAllbackground = this->palette();
    QImage ImgAllbackground(":/prefix1/pic/background.png");
    QImage fitimgpic=ImgAllbackground.scaled(this->width(),this->height(), Qt::IgnoreAspectRatio);
    PAllbackground.setBrush(QPalette::Window, QBrush(fitimgpic));
    this->setPalette(PAllbackground);
    ui->stackedWidget->setCurrentIndex(0);

    ui->listWidget->addItem(QString("1."));
    ui->listWidget->addItem(QString("2."));
    ui->listWidget->addItem(QString("3."));
    is_open= false;
    total_time = QTime(2,0,0);
    H=0;M=0;S=0;
    ui->label_passwd->setStyleSheet("color:red");
    ui->pushButton_confirm->setStyleSheet("QPushButton { background-color: rgb(255, 132, 139); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(245, 69, 234); }");
    ui->pbn_log->setStyleSheet("QPushButton { background-color: rgb(28, 227, 187); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(20, 124, 128); }");
    ui->pbn_cancel->setStyleSheet("QPushButton { background-color: rgb(28, 227, 187); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(20, 124, 128); }");
    ui->pushButton_exit_2->setStyleSheet("QPushButton { background-color: rgb(28, 227, 187); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(20, 124, 128); }");

    //stackedWidget
    connect(ui->pushButton_previous,&QPushButton::clicked,[=](void)->void{
        ui->stackedWidget->setCurrentIndex(0);
    });

    connect(ui->pushButton_confirm,&QPushButton::clicked,[=](void)->void{
        ui->stackedWidget->setCurrentIndex(2);
    });
    connect(ui->pushButton_exit,&QPushButton::clicked,[](){
        exit(0);
    });
    connect(ui->pushButton_begin,&QPushButton::clicked,this,&Widget::_begin_test);
    ui->lineEdit_num->setClearButtonEnabled(true);
    ui->lineEdit_name->setClearButtonEnabled(true);

    connect(ui->pbn_log,&QPushButton::clicked,this,&Widget::pbn_login);
    connect(ui->pbn_cancel,&QPushButton::clicked,[=](void)->void{
        exit(0);
    });
    connect(ui->pushButton_exit_2,&QPushButton::clicked,[](){
        QProcess::startDetached("./up-exe.exe");
        QProcess::startDetached("./up-net.exe");
        QProcess::startDetached("./upupup.exe");
        exit(0);
    });
}

Widget::~Widget()
{
    delete ui;
}
void Widget::pbn_login()
{
    if(ui->lineEdit_num->text().isEmpty())
    {
        QMessageBox::warning(this,"物联网实验室","学号不能为空",QMessageBox::Ok);
        return;
    }
    else if(ui->lineEdit_name->text().isEmpty())
    {
        QMessageBox::warning(this,"物联网实验室","请输入姓名",QMessageBox::Ok);
        return;
    }
    this->enter_id = ui->lineEdit_num->text();
    this->enter_name = ui->lineEdit_name->text();
    bool is_id =false;
    if(this->connect_mysql() == 0)
    {
        QSqlQuery query(db);
        query.exec("select * from ccauth_user");
        //查询学号和姓名
        while(query.next())
        {
            QString _get_id = query.value(3).toString();
            QString _get_name = query.value(4).toString();
            QString _get_class = query.value(9).toString();
            QString _get_passwd = query.value(0).toString();
            if(_get_id == this->enter_id && _get_name == this->enter_name)
            {
                is_id = true;
                ui->label_idid->setText(_get_id);
                ui->label_namename->setText(_get_name);
                ui->label_classclass->setText(_get_class);
                ui->label_passwd_2->setText(_get_passwd);
                ui->label_2->setText("身份验证通过");
                G_id = _get_id;G_name = _get_name;G_class = _get_class;G_passwd = _get_passwd;
                ui->pushButton_confirm->setEnabled(true);
            }
        }
        if(is_id == false)
        {
            ui->label_2->setText("未通过身份验证");
            ui->pushButton_confirm->setDisabled(true);
        }
        ui->stackedWidget->setCurrentIndex(1);
    }
    else
    {
        QMessageBox::warning(this,"Iot","请检查网络",QMessageBox::Ok);
    }
    this->db.close();
}

void Widget::_begin_test()
{
    QProcess::startDetached("./down-exe.exe");
    QProcess::startDetached("./down-net.exe");
    QProcess::startDetached("./kill-exe.exe");
    QProcess::startDetached("./kill-IDE.exe");
    QUrl url(QString("http://116.63.194.200:100"));
    bool is_begin = QDesktopServices::openUrl(url);
    if(is_begin == true)
    {
        ui->stackedWidget->setCurrentIndex(3);
        ui->lcdNumber->setDigitCount(8);
        ui->lcdNumber->setSmallDecimalPoint(true);

        timer = new QTimer(this);
        timer->setInterval(1000);
        timer->start();
        ui->label_idid3->setText(G_id);
        ui->label_namename3->setText(G_name);
        ui->label_passwd_4->setText(G_passwd);

        connect(this->timer,&QTimer::timeout,this,&Widget::on_timeout);
    }
    else {
        QMessageBox::warning(this,tr("物联网实验室"),tr("网页打开失败"),QMessageBox::Ok);
    }
}
void Widget::on_timeout()
{
    this->Calculate_time();
    ui->lcdNumber->display(total_time.toString("hh:mm:ss"));
}
int Widget::connect_mysql()
{
    db = QSqlDatabase::addDatabase("QMYSQL");//连接驱动"QMYSQL"
    db.setHostName("116.63.194.200");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("3306Iot.");
    db.setDatabaseName("ccexam");
    db.open();

    if(!db.open())
    {
        return -1;
    }
    return 0;
}
void Widget::Calculate_time()
{
    H = total_time.hour();
    M = total_time.minute();
    S = total_time.second();
    if(S != 0)
    {
        total_time.setHMS(H,M,--S);
    }
    else if(S == 0 && M != 0)
    {
        M--;
        S = 59;
        total_time.setHMS(H,M,S);
    }
    else if(S == 0 && M == 0)
    {
        H--;
        M = 59;
        S = 59;
        total_time.setHMS(H,M,S);
    }
    else if(H == 0 && M ==0 && S == 0){
        return;
    }
}
void Widget::mousePressEvent(QMouseEvent *e)
{
    bPressFlag = true;
    beginDrag = e->pos();
    QWidget::mousePressEvent(e);
}
void Widget::mouseReleaseEvent(QMouseEvent *e)
{
    bPressFlag = false;
    QWidget::mouseReleaseEvent(e);
}
void Widget::mouseMoveEvent(QMouseEvent *e)
{
    if(bPressFlag)
    {
        QPoint relaPos(QCursor::pos() - beginDrag);
        move(relaPos);
    }
    QWidget::mouseMoveEvent(e);
}
