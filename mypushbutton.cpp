#include "mypushbutton.h"
#include<QDebug>

MyPushButton::MyPushButton(QWidget *parent) : QPushButton(parent)
{
qDebug()<<"My constructure";
}
MyPushButton::~MyPushButton(){
    qDebug()<<"My deconstructure";
}
