#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //create a scene and view
    QGraphicsScene scene;
    QGraphicsView view(&scene);
    //this is where monopoly.jpg should be
    QPixmap g("/home/christophermills/Desktop/monopoly.jpg");
    QGraphicsPixmapItem* item = scene.addPixmap(g);
    item->setFlag(QGraphicsItem::ItemIsMovable);
    view.show();
    return a.exec();
}
