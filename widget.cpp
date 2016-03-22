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
        ui->playerAddMoney->removeItem(5);
        ui->addPlayer->setEnabled(true);
    }
    else if(ui->playerFive->isVisible()){
        ui->playerFive->setVisible(false);
        ui->plFiveMoney->setVisible(false);
        ui->playerAddMoney->removeItem(4);
    }
    else if(ui->playerFour->isVisible()){
        ui->playerFour->setVisible(false);
        ui->plFourMoney->setVisible(false);
        ui->playerAddMoney->removeItem(3);
    }
    else if(ui->playerThree->isVisible()){
        ui->playerThree->setVisible(false);
        ui->plThreeMoney->setVisible(false);
        ui->removePl->setEnabled(false);
        ui->playerAddMoney->removeItem(2);
    }
}

void Widget::on_addPlayer_clicked()
{
    if(!ui->playerThree->isVisible()){
        ui->playerThree->setVisible(true);
        ui->plThreeMoney->setVisible(true);
        QString pl = "Player Three";
        ui->playerAddMoney->addItem(pl);
        ui->removePl->setEnabled(true);
    }
    else if(!ui->playerFour->isVisible()){
        ui->playerFour->setVisible(true);
        ui->plFourMoney->setVisible(true);
        QString pl = "Player Four";
        ui->playerAddMoney->addItem(pl);
    }
    else if(!ui->playerFive->isVisible()){
        ui->playerFive->setVisible(true);
        ui->plFiveMoney->setVisible(true);
        QString pl = "Player Five";
        ui->playerAddMoney->addItem(pl);
    }
    else if(!ui->playerSix->isVisible()){
        ui->playerSix->setVisible(true);
        ui->plSixMoney->setVisible(true);
        QString pl = "Player Six";
        ui->playerAddMoney->addItem(pl);
        ui->addPlayer->setEnabled(false);
    }
}

void Widget::on_addMoneyButton_clicked()
{
    int moneyAmt = ui->addMoneyAmount->value();
    int player = ui->playerAddMoney->currentIndex();

    if(player == 0){
        int moneyTotal = ui->plOneMoney->text().toInt() + moneyAmt;
        QString money = QString::number(moneyTotal);
        ui->plOneMoney->setText(money);
    }
    else if(player == 1){
        int moneyTotal = ui->plTwoMoney->text().toInt() + moneyAmt;
        QString money = QString::number(moneyTotal);
        ui->plTwoMoney->setText(money);
    }
    else if(player == 2){
        int moneyTotal = ui->plThreeMoney->text().toInt() + moneyAmt;
        QString money = QString::number(moneyTotal);
        ui->plThreeMoney->setText(money);
    }
    else if(player == 3){
        int moneyTotal = ui->plFourMoney->text().toInt() + moneyAmt;
        QString money = QString::number(moneyTotal);
        ui->plFourMoney->setText(money);
    }
    else if(player == 4){
        int moneyTotal = ui->plFiveMoney->text().toInt() + moneyAmt;
        QString money = QString::number(moneyTotal);
        ui->plFiveMoney->setText(money);
    }
    else if(player == 5){
        int moneyTotal = ui->plSixMoney->text().toInt() + moneyAmt;
        QString money = QString::number(moneyTotal);
        ui->plSixMoney->setText(money);
    }
}

void Widget::on_playerAddMoney_currentIndexChanged(int index)
{
    if(index == 0){
        if(ui->plOneMoney->text().toInt()==0){
            ui->removeMoneyButton->setEnabled(false);
            ui->addMoneyButton->setEnabled(false);
        }
        else {
            ui->removeMoneyButton->setEnabled(true);
            ui->addMoneyButton->setEnabled(true);
        }
    }
    else if(index == 1){
        if(ui->plTwoMoney->text().toInt()==0){
            ui->removeMoneyButton->setEnabled(false);
            ui->addMoneyButton->setEnabled(false);
        }
        else {
            ui->removeMoneyButton->setEnabled(true);
            ui->addMoneyButton->setEnabled(true);
        }
    }
    else if(index == 2){
        if(ui->plThreeMoney->text().toInt()==0){
            ui->removeMoneyButton->setEnabled(false);
            ui->addMoneyButton->setEnabled(false);
        }
        else {
            ui->removeMoneyButton->setEnabled(true);
            ui->addMoneyButton->setEnabled(true);
        }
    }
    else if(index == 3){
        if(ui->plFourMoney->text().toInt()==0){
            ui->removeMoneyButton->setEnabled(false);
            ui->addMoneyButton->setEnabled(false);
        }
        else {
            ui->removeMoneyButton->setEnabled(true);
            ui->addMoneyButton->setEnabled(true);
        }
    }
    else if(index == 4){
        if(ui->plFiveMoney->text().toInt()==0){
            ui->removeMoneyButton->setEnabled(false);
            ui->addMoneyButton->setEnabled(false);
        }
        else {
            ui->removeMoneyButton->setEnabled(true);
            ui->addMoneyButton->setEnabled(true);
        }
    }
    else if(index == 5){
        if(ui->plSixMoney->text().toInt()==0){
            ui->removeMoneyButton->setEnabled(false);
            ui->addMoneyButton->setEnabled(false);
        }
        else {
            ui->removeMoneyButton->setEnabled(true);
            ui->addMoneyButton->setEnabled(true);
        }
    }
}

void Widget::on_removeMoneyButton_clicked()
{
    int moneyAmt = ui->addMoneyAmount->value();
    int player = ui->playerAddMoney->currentIndex();

    if(player == 0){
        int moneyTotal = ui->plOneMoney->text().toInt() - moneyAmt;
        QString money = QString::number(moneyTotal);
        ui->plOneMoney->setText(money);
        if(moneyTotal == 0 || moneyTotal < 0){
            QString lost = "Player One is a giant loser!";
            ui->removeMoneyButton->setEnabled(false);
            ui->addMoneyButton->setEnabled(false);
            ui->playerOne->setVisible(false);
            ui->plOneMoney->setText(lost);
        }
    }
    else if(player == 1){
        int moneyTotal = ui->plTwoMoney->text().toInt() - moneyAmt;
        QString money = QString::number(moneyTotal);
        ui->plTwoMoney->setText(money);
        if(moneyTotal == 0 || moneyTotal < 0){
            QString lost = "Player Two is a giant loser!";
            ui->removeMoneyButton->setEnabled(false);
            ui->addMoneyButton->setEnabled(false);
            ui->playerTwo->setVisible(false);
            ui->plTwoMoney->setText(lost);
        }
    }
    else if(player == 2){
        int moneyTotal = ui->plThreeMoney->text().toInt() - moneyAmt;
        QString money = QString::number(moneyTotal);
        ui->plThreeMoney->setText(money);
        if(moneyTotal == 0 || moneyTotal < 0){
            QString lost = "Player Three is a giant loser!";
            ui->removeMoneyButton->setEnabled(false);
            ui->addMoneyButton->setEnabled(false);
            ui->playerThree->setVisible(false);
            ui->plThreeMoney->setText(lost);
        }
    }
    else if(player == 3){
        int moneyTotal = ui->plFourMoney->text().toInt() - moneyAmt;
        QString money = QString::number(moneyTotal);
        ui->plFourMoney->setText(money);
        if(moneyTotal == 0 || moneyTotal < 0){
            QString lost = "Player Four is a giant loser!";
            ui->removeMoneyButton->setEnabled(false);
            ui->addMoneyButton->setEnabled(false);
            ui->playerFour->setVisible(false);
            ui->plFourMoney->setText(lost);
        }
    }
    else if(player == 4){
        int moneyTotal = ui->plFiveMoney->text().toInt() - moneyAmt;
        QString money = QString::number(moneyTotal);
        ui->plFiveMoney->setText(money);
        if(moneyTotal == 0 || moneyTotal < 0){
            QString lost = "Player Five is a giant loser!";
            ui->removeMoneyButton->setEnabled(false);
            ui->addMoneyButton->setEnabled(false);
            ui->playerFive->setVisible(false);
            ui->plFiveMoney->setText(lost);
        }
    }
    else if(player == 5){
        int moneyTotal = ui->plSixMoney->text().toInt() - moneyAmt;
        QString money = QString::number(moneyTotal);
        ui->plSixMoney->setText(money);
        if(moneyTotal == 0 || moneyTotal < 0){
            QString lost = "Player Six is a giant loser!";
            ui->removeMoneyButton->setEnabled(false);
            ui->addMoneyButton->setEnabled(false);
            ui->playerSix->setVisible(false);
            ui->plSixMoney->setText(lost);
        }
    }
}
