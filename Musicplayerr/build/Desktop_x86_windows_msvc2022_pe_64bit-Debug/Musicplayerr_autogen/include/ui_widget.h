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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QListWidget *listWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(246, 303);
        horizontalLayoutWidget = new QWidget(Widget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 240, 251, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_10 = new QPushButton(horizontalLayoutWidget);
        pushButton_10->setObjectName("pushButton_10");

        horizontalLayout->addWidget(pushButton_10);

        pushButton_9 = new QPushButton(horizontalLayoutWidget);
        pushButton_9->setObjectName("pushButton_9");

        horizontalLayout->addWidget(pushButton_9);

        pushButton_8 = new QPushButton(horizontalLayoutWidget);
        pushButton_8->setObjectName("pushButton_8");

        horizontalLayout->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(horizontalLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");

        horizontalLayout->addWidget(pushButton_7);

        pushButton_6 = new QPushButton(horizontalLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");

        horizontalLayout->addWidget(pushButton_6);

        listWidget = new QListWidget(Widget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 10, 231, 211));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Widget", "1", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Widget", "2", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Widget", "3", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Widget", "4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
