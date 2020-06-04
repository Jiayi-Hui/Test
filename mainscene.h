#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>//包含头文件Qwidget窗口类

class Mainscene : public QWidget
{
    Q_OBJECT//允许类中使用信号和槽

public:
    Mainscene(QWidget *parent = nullptr);
    ~Mainscene();
};
#endif // MAINSCENE_H
