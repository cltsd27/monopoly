#include "winner.h"
#include "ui_winner.h"

Winner::Winner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Winner)
{
    ui->setupUi(this);
}

void Winner::setWinner(int winner) {
    ui->winner->setText(QString::number(winner));
}

Winner::~Winner()
{
    delete ui;
}
