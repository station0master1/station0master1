#include "widget.h"
#include "./ui_widget.h"
#include <QDebug>
#include <QFileDialog>
#include<QDir>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_10_clicked()
{
    qInfo()<<"hello";
    auto path=QFileDialog::getExistingDirectory(this,"请选择哪个","E:\\Downloads\\music");
    QDir dir(path);
    auto musiclist=dir.entryList(QStringList()<<"*.mp3"<<"*.wav");
    qInfo()<<musiclist;
    ui->listWidget->addItems(musiclist);
}

