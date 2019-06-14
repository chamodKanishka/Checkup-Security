#ifndef VISITORS_H
#define VISITORS_H

#include <QWidget>

namespace Ui {
class Visitors;
}

class Visitors : public QWidget
{
    Q_OBJECT

public:
    explicit Visitors(QWidget *parent = nullptr);
    ~Visitors();

private:
    Ui::Visitors *ui;
};

#endif // VISITORS_H
