#include "form.h"
#include "ui_form.h"
#include<QTimer>

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("物联网实验室考核平台"));
    this->setWindowModality(Qt::ApplicationModal);
    QTimer *timer = new QTimer(this);
    timer->start(1000);
    connect(timer,&QTimer::timeout,this,&Form::Update_time);

}

Form::~Form()
{
    delete ui;
}

void Form::Update_time()
{

}
