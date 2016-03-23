#include "widget.h"
#include "ui_widget.h"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    QGraphicsPixmapItem item(QPixmap("C:\\Users\\Kirin\\Documents\\GitHub\\monopoly\\images\\black.png"));
    scene->addItem(&item);
    ui->graphicsView->setScene(scene);
}
void Widget::setPlayers(int players){
    QLabel* pl[] = {ui->playerOne, ui->playerTwo, ui->playerThree, ui->playerFour, ui->playerFive, ui->playerSix};
    QLabel* plMoney[] = {ui->plOneMoney, ui->plTwoMoney, ui->plThreeMoney, ui->plFourMoney, ui->plFiveMoney, ui->plSixMoney};
    for(int i = players; i < 6; i++){
        ui->playerAddMoney->removeItem(players);
        pl[i]->setVisible(false);
        plMoney[i]->setVisible(false);
    }
}

void Widget::setStartingGuaps(int players, int guaps){
    QLabel* plMoney[] = {ui->plOneMoney, ui->plTwoMoney, ui->plThreeMoney, ui->plFourMoney, ui->plFiveMoney, ui->plSixMoney};
    for(int i = 0; i < players; i++){
        plMoney[i]->setText(QString::number(guaps));
    }
}

int Widget::checkForWinner(int players) {
    QLabel* pl[] = {ui->playerOne, ui->playerTwo, ui->playerThree, ui->playerFour, ui->playerFive, ui->playerSix};
    int winner = 0;
    int loosers = 0;
    for (int i = 0; i < players; i++) {
        if (!pl[i]->isVisible())
            loosers++;
        else
            winner = i;
    }
    if (loosers == (players - 1))
        return winner;
    return -1;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_addMoneyButton_clicked() {
    QLabel* plMoney[] = {ui->plOneMoney, ui->plTwoMoney, ui->plThreeMoney, ui->plFourMoney, ui->plFiveMoney, ui->plSixMoney};
    int moneyAmt = ui->addMoneyAmount->value();
    int player = ui->playerAddMoney->currentIndex();
    int moneyTotal = plMoney[player]->text().toInt() + moneyAmt;
    QString money = QString::number(moneyTotal);
    plMoney[player]->setText(money);
}

void Widget::on_playerAddMoney_currentIndexChanged(int index)
{
    QLabel* plMoney[] = {ui->plOneMoney, ui->plTwoMoney, ui->plThreeMoney, ui->plFourMoney, ui->plFiveMoney, ui->plSixMoney};
    if(plMoney[index]->text().toInt()==0){
        ui->removeMoneyButton->setEnabled(false);
        ui->addMoneyButton->setEnabled(false);
    } else {
        ui->removeMoneyButton->setEnabled(true);
        ui->addMoneyButton->setEnabled(true);
    }
}

void Widget::on_removeMoneyButton_clicked() {
    QLabel* pl[] = {ui->playerOne, ui->playerTwo, ui->playerThree, ui->playerFour, ui->playerFive, ui->playerSix};
    QLabel* plMoney[] = {ui->plOneMoney, ui->plTwoMoney, ui->plThreeMoney, ui->plFourMoney, ui->plFiveMoney, ui->plSixMoney};
    int moneyAmt = ui->addMoneyAmount->value();
    int player = ui->playerAddMoney->currentIndex();
    int moneyTotal = plMoney[player]->text().toInt() - moneyAmt;
    QString money = QString::number(moneyTotal);
    plMoney[player]->setText(money);
    if(moneyTotal == 0 || moneyTotal < 0){
        char str[80];
        char playerNumStr[1];
        int playerNum = player+1;
        sprintf(playerNumStr, "%d", playerNum);
        strcpy (str, "Player ");
        strcat (str, playerNumStr);
        strcat (str, " is a giant loser!");
        QString lost = str;
        ui->removeMoneyButton->setEnabled(false);
        ui->addMoneyButton->setEnabled(false);
        pl[player]->setVisible(false);
        plMoney[player]->setText(lost);
    }
    checkForWinner(players);
}
