#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
}
void Widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::black);
    painter.drawLine(100,100,100,100);
}
Widget::~Widget()
{
    delete ui;
}

void Widget::on_removePl_clicked()
{
    if(ui->playerFour->isVisible()){
        ui->playerFour->setVisible(false);
        ui->plFourMoney->setVisible(false);
    }
    else if(ui->playerThree->isVisible()){
        ui->playerThree->setVisible(false);
        ui->plThreeMoney->setVisible(false);
    }
    else if(ui->playerTwo->isVisible()){
        ui->playerTwo->setVisible(false);
        ui->plTwoMoney->setVisible(false);
    }
    else if(ui->playerOne->isVisible()){
        ui->playerOne->setVisible(false);
        ui->plOneMoney->setVisible(false);
    }
}
