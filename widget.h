#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

protected:
    void paintEvent(QPaintEvent *);

private slots:
    void on_removePl_clicked();

    void on_addPlayer_clicked();

    void on_addMoneyButton_clicked();

    void on_playerAddMoney_currentIndexChanged(int index);

    void on_removeMoneyButton_clicked();

private:
    Ui::Widget *ui;
    QGraphicsScene *scene;
};

#endif // WIDGET_H
