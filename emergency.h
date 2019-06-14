#ifndef EMERGENCY_H
#define EMERGENCY_H

#include <QWidget>

namespace Ui {
class Emergency;
}

class Emergency : public QWidget
{
    Q_OBJECT

public:
    explicit Emergency(QWidget *parent = nullptr);
    ~Emergency();

private:
    Ui::Emergency *ui;
};

#endif // EMERGENCY_H
