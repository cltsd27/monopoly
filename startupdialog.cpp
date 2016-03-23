#include "startupdialog.h"
#include <iostream>
#include "ui_startupdialog.h"

startUpDialog::startUpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::startUpDialog)
{
    ui->setupUi(this);
}

startUpDialog::~startUpDialog()
{
    delete ui;
}

void startUpDialog::on_numPlayerSlider_sliderMoved(int position)
{
    ui->numPlayers->setText(QString::number(position));
}

int startUpDialog::getNumPlayers()
{
    return ui->numPlayers->text().toInt();
}

int startUpDialog::getStartingGuaps()
{
    return ui->startingGuaps->value();
}

void startUpDialog::on_font_currentFontChanged(const QFont &f)
{
    this->setFont(f);
}

QFont startUpDialog::getFont()
{
    return this->font();
}
