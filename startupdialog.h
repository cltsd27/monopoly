#ifndef STARTUPDIALOG_H
#define STARTUPDIALOG_H

#include <QDialog>

namespace Ui {
class startUpDialog;
}

class startUpDialog : public QDialog
{
    Q_OBJECT

public:
    explicit startUpDialog(QWidget *parent = 0);
    int getNumPlayers();
    int getStartingGuaps();
    QFont getFont();
    ~startUpDialog();

private slots:
    void on_numPlayerSlider_sliderMoved(int position);

    void on_font_currentFontChanged(const QFont &f);

private:
    Ui::startUpDialog *ui;
};

#endif // STARTUPDIALOG_H
