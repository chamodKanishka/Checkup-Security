#ifndef ERRORHANDELING_H
#define ERRORHANDELING_H

#include <QWidget>

namespace Ui {
class ErrorHandeling;
}

class ErrorHandeling : public QWidget
{
    Q_OBJECT

public:
    explicit ErrorHandeling(QWidget *parent = nullptr);
    ~ErrorHandeling();

private:
    Ui::ErrorHandeling *ui;
};

#endif // ERRORHANDELING_H
