#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include<QTimer>
#include<QTime>


namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();
public slots:
    void Update_time();

private:
    Ui::Form *ui;
    QTime time_obj;
};

#endif // FORM_H
