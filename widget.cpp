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
    if(ui->playerSix->isVisible()){
        ui->playerSix->setVisible(false);
        ui->plSixMoney->setVisible(false);
        ui->addPlayer->setEnabled(true);
    }
    else if(ui->playerFive->isVisible()){
        ui->playerFive->setVisible(false);
        ui->plFiveMoney->setVisible(false);
    }
    else if(ui->playerFour->isVisible()){
        ui->playerFour->setVisible(false);
        ui->plFourMoney->setVisible(false);
    }
    else if(ui->playerThree->isVisible()){
        ui->playerThree->setVisible(false);
        ui->plThreeMoney->setVisible(false);
        ui->removePl->setEnabled(false);
    }
}

void Widget::on_addPlayer_clicked()
{
    if(!ui->playerThree->isVisible()){
        ui->playerThree->setVisible(true);
        ui->plThreeMoney->setVisible(true);
        ui->removePl->setEnabled(true);
    }
    else if(!ui->playerFour->isVisible()){
        ui->playerFour->setVisible(true);
        ui->plFourMoney->setVisible(true);
    }
    else if(!ui->playerFive->isVisible()){
        ui->playerFive->setVisible(true);
        ui->plFiveMoney->setVisible(true);
    }
    else if(!ui->playerSix->isVisible()){
        ui->playerSix->setVisible(true);
        ui->plSixMoney->setVisible(true);
        ui->addPlayer->setEnabled(false);
    }
}
