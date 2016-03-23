#include "widget.h"
#include "startupdialog.h"
#include "winner.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    int players = 2;
    int guaps = 1500;
    Widget w;
    startUpDialog s;
    Winner winner;
    s.exec();
    players = s.getNumPlayers();
    guaps = s.getStartingGuaps();
    w.setPlayers(players);
    w.setStartingGuaps(players, guaps);
    w.setFont(s.getFont());
    w.show();
    winner.show();
    return a.exec();
}
