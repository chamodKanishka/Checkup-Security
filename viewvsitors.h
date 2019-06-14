#ifndef VIEWVSITORS_H
#define VIEWVSITORS_H

#include <QWidget>

namespace Ui {
class ViewVsitors;
}

class ViewVsitors : public QWidget
{
    Q_OBJECT

public:
    explicit ViewVsitors(QWidget *parent = nullptr);
    ~ViewVsitors();

private:
    Ui::ViewVsitors *ui;
};

#endif // VIEWVSITORS_H
