/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(199, 312);
        Widget->setMaximumSize(QSize(16777215, 16777215));
        Widget->setStyleSheet(QString::fromUtf8("*{\n"
"border:none;\n"
"}"));
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 250, 181, 31));
        widget->setStyleSheet(QString::fromUtf8("*{\n"
"boredr:none;\n"
"}"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 0));
        pushButton->setMaximumSize(QSize(32, 32));
        pushButton->setStyleSheet(QString::fromUtf8("icon:url(:/C:/Users/duan/Desktop/pictu/a.png)"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 0));
        pushButton_2->setMaximumSize(QSize(32, 32));
        pushButton_2->setStyleSheet(QString::fromUtf8("icon:url(:/C:/Users/duan/Desktop/pictu/b.png)"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(0, 0));
        pushButton_3->setMaximumSize(QSize(29, 32));
        pushButton_3->setStyleSheet(QString::fromUtf8("icon:url(:/C:/Users/duan/Desktop/pictu/c.png)"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(0, 0));
        pushButton_4->setMaximumSize(QSize(32, 32));
        pushButton_4->setStyleSheet(QString::fromUtf8("icon:url(:/C:/Users/duan/Desktop/pictu/d.png)"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(0, 0));
        pushButton_5->setMaximumSize(QSize(30, 30));
        pushButton_5->setStyleSheet(QString::fromUtf8("icon:url(:/C:/Users/duan/Desktop/pictu/e.png)"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMinimumSize(QSize(0, 0));
        pushButton_6->setMaximumSize(QSize(29, 29));
        pushButton_6->setStyleSheet(QString::fromUtf8("icon:url(:/C:/Users/duan/Desktop/pictu/f.png)"));

        horizontalLayout->addWidget(pushButton_6);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
