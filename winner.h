#ifndef WINNER_H
#define WINNER_H

#include <QDialog>

namespace Ui {
class Winner;
}

class Winner : public QDialog
{
    Q_OBJECT

public:
    explicit Winner(QWidget *parent = 0);
    void setWinner(int winner);
    ~Winner();

private:
    Ui::Winner *ui;
};

#endif // WINNER_H
