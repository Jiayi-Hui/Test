#include "mainscene.h"
#include<qpushbutton.h>
#include<mypushbutton.h>
//命名规范
//类名 首字母大写
//函数名和变量名 首字母小写，单词之间首字母大写
//快捷键
//注释 /
//运行 r
//编译 b
//字体缩放 鼠标
//整体移动
//帮助文档 F1/左侧/路径
//自动对齐 i
//.h .cpp shift  F4

Mainscene::Mainscene(QWidget *parent)
    : QWidget(parent)
{
    //创建一个按钮，要包含头文件
    QPushButton *btn = new QPushButton;
    btn->show();//show以顶层方式弹出
    btn->setParent(this);//让btn依赖在窗口中
    btn->setText("button01");
     QPushButton *btn2 = new QPushButton("button02",this);
     resize(600,400);//设置窗口面积大小
     btn->resize(100,100);//设置按钮大小
     btn2->move(100,100);//移动按钮
     setWindowTitle("Window01");//设置窗口名称
     setFixedHeight(400);
     MyPushButton * mbtn=new MyPushButton;
     mbtn->setText("My");
     mbtn->setParent(this);
}

Mainscene::~Mainscene()
{
    qDebug("Q decon");
}

