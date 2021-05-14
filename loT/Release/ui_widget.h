/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_num;
    QLineEdit *lineEdit_num;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_name_2;
    QLineEdit *lineEdit_name;
    QPushButton *pbn_cancel;
    QPushButton *pbn_log;
    QWidget *page_2;
    QLabel *label_2;
    QLabel *label_id;
    QLabel *label_passwd;
    QPushButton *pushButton_confirm;
    QPushButton *pushButton_previous;
    QPushButton *pushButton_exit;
    QLabel *label_idid;
    QLabel *label_passwd_2;
    QLabel *label_name_3;
    QLabel *label_namename;
    QLabel *label_class;
    QLabel *label_classclass;
    QWidget *page_3;
    QLabel *label_notice;
    QListWidget *listWidget;
    QPushButton *pushButton_begin;
    QWidget *page_4;
    QLabel *label_id3;
    QLabel *label_name3;
    QPushButton *pushButton_exit_2;
    QLabel *label_idid3;
    QLabel *label_namename3;
    QLCDNumber *lcdNumber;
    QLabel *label_3;
    QLabel *label_passwd_3;
    QLabel *label_passwd_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(540, 540);
        Widget->setMinimumSize(QSize(540, 540));
        Widget->setMaximumSize(QSize(540, 540));
        QFont font;
        font.setPointSize(9);
        Widget->setFont(font);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 50, 281, 51));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 100, 501, 431));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        widget_3 = new QWidget(page);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(80, 60, 361, 161));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_num = new QLabel(widget);
        label_num->setObjectName(QString::fromUtf8("label_num"));
        sizePolicy.setHeightForWidth(label_num->sizePolicy().hasHeightForWidth());
        label_num->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(15);
        label_num->setFont(font2);
        label_num->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_num);

        lineEdit_num = new QLineEdit(widget);
        lineEdit_num->setObjectName(QString::fromUtf8("lineEdit_num"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_num->sizePolicy().hasHeightForWidth());
        lineEdit_num->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setPointSize(14);
        lineEdit_num->setFont(font3);
        lineEdit_num->setStyleSheet(QString::fromUtf8("\n"
"border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;"));
        lineEdit_num->setMaxLength(11);

        horizontalLayout->addWidget(lineEdit_num);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_name_2 = new QLabel(widget_2);
        label_name_2->setObjectName(QString::fromUtf8("label_name_2"));
        sizePolicy.setHeightForWidth(label_name_2->sizePolicy().hasHeightForWidth());
        label_name_2->setSizePolicy(sizePolicy);
        label_name_2->setFont(font2);
        label_name_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_name_2);

        lineEdit_name = new QLineEdit(widget_2);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        sizePolicy1.setHeightForWidth(lineEdit_name->sizePolicy().hasHeightForWidth());
        lineEdit_name->setSizePolicy(sizePolicy1);
        lineEdit_name->setFont(font3);
        lineEdit_name->setStyleSheet(QString::fromUtf8("\n"
"border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;"));
        lineEdit_name->setMaxLength(10);
        lineEdit_name->setReadOnly(false);
        lineEdit_name->setCursorMoveStyle(Qt::VisualMoveStyle);

        horizontalLayout_2->addWidget(lineEdit_name);


        verticalLayout->addWidget(widget_2);

        pbn_cancel = new QPushButton(page);
        pbn_cancel->setObjectName(QString::fromUtf8("pbn_cancel"));
        pbn_cancel->setGeometry(QRect(150, 300, 231, 51));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pbn_cancel->sizePolicy().hasHeightForWidth());
        pbn_cancel->setSizePolicy(sizePolicy2);
        QFont font4;
        font4.setPointSize(17);
        pbn_cancel->setFont(font4);
        pbn_cancel->setCursor(QCursor(Qt::PointingHandCursor));
        pbn_cancel->setMouseTracking(false);
        pbn_cancel->setTabletTracking(false);
        pbn_cancel->setAutoFillBackground(false);
        pbn_cancel->setAutoDefault(false);
        pbn_cancel->setFlat(false);
        pbn_log = new QPushButton(page);
        pbn_log->setObjectName(QString::fromUtf8("pbn_log"));
        pbn_log->setGeometry(QRect(150, 232, 231, 51));
        sizePolicy2.setHeightForWidth(pbn_log->sizePolicy().hasHeightForWidth());
        pbn_log->setSizePolicy(sizePolicy2);
        pbn_log->setFont(font4);
        pbn_log->setCursor(QCursor(Qt::PointingHandCursor));
        pbn_log->setAutoFillBackground(false);
        pbn_log->setCheckable(false);
        pbn_log->setChecked(false);
        pbn_log->setAutoExclusive(false);
        pbn_log->setAutoDefault(false);
        pbn_log->setFlat(false);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 40, 281, 51));
        QFont font5;
        font5.setPointSize(20);
        label_2->setFont(font5);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_id = new QLabel(page_2);
        label_id->setObjectName(QString::fromUtf8("label_id"));
        label_id->setGeometry(QRect(50, 100, 71, 31));
        label_id->setFont(font2);
        label_id->setAlignment(Qt::AlignCenter);
        label_passwd = new QLabel(page_2);
        label_passwd->setObjectName(QString::fromUtf8("label_passwd"));
        label_passwd->setGeometry(QRect(10, 250, 151, 31));
        label_passwd->setFont(font2);
        label_passwd->setAlignment(Qt::AlignCenter);
        pushButton_confirm = new QPushButton(page_2);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(80, 310, 331, 51));
        QFont font6;
        font6.setPointSize(16);
        pushButton_confirm->setFont(font6);
        pushButton_confirm->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 255)"));
        pushButton_previous = new QPushButton(page_2);
        pushButton_previous->setObjectName(QString::fromUtf8("pushButton_previous"));
        pushButton_previous->setGeometry(QRect(80, 370, 161, 51));
        QFont font7;
        font7.setPointSize(12);
        pushButton_previous->setFont(font7);
        pushButton_exit = new QPushButton(page_2);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(250, 370, 161, 51));
        pushButton_exit->setFont(font7);
        label_idid = new QLabel(page_2);
        label_idid->setObjectName(QString::fromUtf8("label_idid"));
        label_idid->setGeometry(QRect(150, 100, 191, 31));
        label_idid->setFont(font2);
        label_idid->setAlignment(Qt::AlignCenter);
        label_passwd_2 = new QLabel(page_2);
        label_passwd_2->setObjectName(QString::fromUtf8("label_passwd_2"));
        label_passwd_2->setGeometry(QRect(170, 250, 171, 31));
        label_passwd_2->setFont(font2);
        label_passwd_2->setAlignment(Qt::AlignCenter);
        label_name_3 = new QLabel(page_2);
        label_name_3->setObjectName(QString::fromUtf8("label_name_3"));
        label_name_3->setGeometry(QRect(50, 150, 71, 31));
        label_name_3->setFont(font2);
        label_name_3->setAlignment(Qt::AlignCenter);
        label_namename = new QLabel(page_2);
        label_namename->setObjectName(QString::fromUtf8("label_namename"));
        label_namename->setGeometry(QRect(150, 150, 191, 31));
        label_namename->setFont(font2);
        label_namename->setAlignment(Qt::AlignCenter);
        label_class = new QLabel(page_2);
        label_class->setObjectName(QString::fromUtf8("label_class"));
        label_class->setGeometry(QRect(50, 200, 71, 31));
        label_class->setFont(font2);
        label_class->setAlignment(Qt::AlignCenter);
        label_classclass = new QLabel(page_2);
        label_classclass->setObjectName(QString::fromUtf8("label_classclass"));
        label_classclass->setGeometry(QRect(150, 200, 201, 31));
        label_classclass->setFont(font2);
        label_classclass->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_notice = new QLabel(page_3);
        label_notice->setObjectName(QString::fromUtf8("label_notice"));
        label_notice->setGeometry(QRect(200, 20, 111, 41));
        label_notice->setFont(font3);
        label_notice->setStyleSheet(QString::fromUtf8("color:rgb(170, 0, 0)"));
        label_notice->setAlignment(Qt::AlignCenter);
        listWidget = new QListWidget(page_3);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 60, 481, 281));
        listWidget->setFont(font7);
        pushButton_begin = new QPushButton(page_3);
        pushButton_begin->setObjectName(QString::fromUtf8("pushButton_begin"));
        pushButton_begin->setGeometry(QRect(30, 350, 441, 41));
        QFont font8;
        font8.setPointSize(13);
        pushButton_begin->setFont(font8);
        pushButton_begin->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(255, 132, 139); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(245, 69, 234); }"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_id3 = new QLabel(page_4);
        label_id3->setObjectName(QString::fromUtf8("label_id3"));
        label_id3->setGeometry(QRect(100, 30, 61, 31));
        label_id3->setFont(font2);
        label_name3 = new QLabel(page_4);
        label_name3->setObjectName(QString::fromUtf8("label_name3"));
        label_name3->setGeometry(QRect(100, 80, 61, 31));
        label_name3->setFont(font2);
        pushButton_exit_2 = new QPushButton(page_4);
        pushButton_exit_2->setObjectName(QString::fromUtf8("pushButton_exit_2"));
        pushButton_exit_2->setGeometry(QRect(360, 350, 131, 41));
        pushButton_exit_2->setFont(font8);
        pushButton_exit_2->setStyleSheet(QString::fromUtf8("color:rgb(39, 137, 255)"));
        label_idid3 = new QLabel(page_4);
        label_idid3->setObjectName(QString::fromUtf8("label_idid3"));
        label_idid3->setGeometry(QRect(190, 30, 191, 31));
        label_idid3->setFont(font2);
        label_idid3->setAlignment(Qt::AlignCenter);
        label_namename3 = new QLabel(page_4);
        label_namename3->setObjectName(QString::fromUtf8("label_namename3"));
        label_namename3->setGeometry(QRect(190, 80, 191, 31));
        label_namename3->setFont(font2);
        label_namename3->setAlignment(Qt::AlignCenter);
        lcdNumber = new QLCDNumber(page_4);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(90, 220, 291, 101));
        lcdNumber->setStyleSheet(QString::fromUtf8("background-color:white"));
        lcdNumber->setFrameShape(QFrame::WinPanel);
        lcdNumber->setMode(QLCDNumber::Dec);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        label_3 = new QLabel(page_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 180, 141, 31));
        label_3->setFont(font8);
        label_3->setAlignment(Qt::AlignCenter);
        label_passwd_3 = new QLabel(page_4);
        label_passwd_3->setObjectName(QString::fromUtf8("label_passwd_3"));
        label_passwd_3->setGeometry(QRect(30, 130, 151, 31));
        label_passwd_3->setFont(font2);
        label_passwd_3->setAlignment(Qt::AlignCenter);
        label_passwd_4 = new QLabel(page_4);
        label_passwd_4->setObjectName(QString::fromUtf8("label_passwd_4"));
        label_passwd_4->setGeometry(QRect(200, 130, 181, 31));
        label_passwd_4->setFont(font2);
        label_passwd_4->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_4);

        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(3);
        pbn_log->setDefault(false);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "\347\211\251\350\201\224\347\275\221\345\256\236\351\252\214\345\256\244\350\200\203\346\240\270", nullptr));
        label_num->setText(QApplication::translate("Widget", "\345\255\246\345\217\267", nullptr));
        label_name_2->setText(QApplication::translate("Widget", "\345\247\223\345\220\215", nullptr));
        lineEdit_name->setText(QString());
        pbn_cancel->setText(QApplication::translate("Widget", "\351\200\200\345\207\272\350\200\203\346\240\270\347\263\273\347\273\237", nullptr));
        pbn_log->setText(QApplication::translate("Widget", "\351\252\214\350\257\201\345\255\246\347\224\237\350\272\253\344\273\275", nullptr));
        label_2->setText(QApplication::translate("Widget", "\350\272\253\344\273\275\351\252\214\350\257\201", nullptr));
        label_id->setText(QApplication::translate("Widget", "\345\255\246\345\217\267", nullptr));
        label_passwd->setText(QApplication::translate("Widget", "\350\200\203\350\257\225\347\231\273\345\275\225\345\257\206\347\240\201", nullptr));
        pushButton_confirm->setText(QApplication::translate("Widget", "\347\241\256\350\256\244\344\277\241\346\201\257\346\227\240\350\257\257", nullptr));
        pushButton_previous->setText(QApplication::translate("Widget", "\344\270\212\344\270\200\346\255\245", nullptr));
        pushButton_exit->setText(QApplication::translate("Widget", "\351\200\200\345\207\272\350\200\203\350\257\225\347\263\273\347\273\237", nullptr));
        label_idid->setText(QString());
        label_passwd_2->setText(QString());
        label_name_3->setText(QApplication::translate("Widget", "\345\247\223\345\220\215", nullptr));
        label_namename->setText(QString());
        label_class->setText(QApplication::translate("Widget", "\344\270\223\344\270\232", nullptr));
        label_classclass->setText(QString());
        label_notice->setText(QApplication::translate("Widget", "\350\200\203\350\257\225\351\241\273\347\237\245", nullptr));
        pushButton_begin->setText(QApplication::translate("Widget", "\346\210\221\345\267\262\345\256\214\346\210\220\351\230\205\350\257\273\345\271\266\345\220\214\346\204\217\350\200\203\350\257\225\350\247\204\345\210\231", nullptr));
        label_id3->setText(QApplication::translate("Widget", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_name3->setText(QApplication::translate("Widget", "\345\247\223\345\220\215\357\274\232", nullptr));
        pushButton_exit_2->setText(QApplication::translate("Widget", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
        label_idid3->setText(QString());
        label_namename3->setText(QString());
        label_3->setText(QApplication::translate("Widget", "\345\211\251\344\275\231\350\200\203\350\257\225\346\227\266\351\227\264", nullptr));
        label_passwd_3->setText(QApplication::translate("Widget", "\350\200\203\350\257\225\347\231\273\345\275\225\345\257\206\347\240\201", nullptr));
        label_passwd_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
