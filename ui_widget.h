/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGraphicsView *graphicsView;
    QLabel *playerOne;
    QLabel *playerTwo;
    QLabel *playerThree;
    QLabel *playerFour;
    QLabel *plOneMoney;
    QLabel *plTwoMoney;
    QLabel *plThreeMoney;
    QLabel *plFourMoney;
    QPushButton *removePl;
    QPushButton *addMoneyButton;
    QComboBox *playerAddMoney;
    QSpinBox *addMoneyAmount;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1133, 601);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        graphicsView = new QGraphicsView(Widget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 20, 801, 561));
        playerOne = new QLabel(Widget);
        playerOne->setObjectName(QStringLiteral("playerOne"));
        playerOne->setGeometry(QRect(830, 20, 67, 61));
        playerTwo = new QLabel(Widget);
        playerTwo->setObjectName(QStringLiteral("playerTwo"));
        playerTwo->setGeometry(QRect(830, 90, 67, 61));
        playerThree = new QLabel(Widget);
        playerThree->setObjectName(QStringLiteral("playerThree"));
        playerThree->setGeometry(QRect(830, 160, 67, 61));
        playerFour = new QLabel(Widget);
        playerFour->setObjectName(QStringLiteral("playerFour"));
        playerFour->setGeometry(QRect(830, 230, 67, 61));
        plOneMoney = new QLabel(Widget);
        plOneMoney->setObjectName(QStringLiteral("plOneMoney"));
        plOneMoney->setGeometry(QRect(890, 49, 67, 31));
        plTwoMoney = new QLabel(Widget);
        plTwoMoney->setObjectName(QStringLiteral("plTwoMoney"));
        plTwoMoney->setGeometry(QRect(890, 120, 67, 31));
        plThreeMoney = new QLabel(Widget);
        plThreeMoney->setObjectName(QStringLiteral("plThreeMoney"));
        plThreeMoney->setGeometry(QRect(890, 190, 67, 31));
        plFourMoney = new QLabel(Widget);
        plFourMoney->setObjectName(QStringLiteral("plFourMoney"));
        plFourMoney->setGeometry(QRect(890, 260, 67, 31));
        removePl = new QPushButton(Widget);
        removePl->setObjectName(QStringLiteral("removePl"));
        removePl->setGeometry(QRect(850, 460, 121, 31));
        addMoneyButton = new QPushButton(Widget);
        addMoneyButton->setObjectName(QStringLiteral("addMoneyButton"));
        addMoneyButton->setGeometry(QRect(850, 530, 181, 31));
        playerAddMoney = new QComboBox(Widget);
        playerAddMoney->setObjectName(QStringLiteral("playerAddMoney"));
        playerAddMoney->setGeometry(QRect(850, 500, 121, 28));
        addMoneyAmount = new QSpinBox(Widget);
        addMoneyAmount->setObjectName(QStringLiteral("addMoneyAmount"));
        addMoneyAmount->setGeometry(QRect(980, 500, 52, 30));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        playerOne->setText(QApplication::translate("Widget", "<html><head/><body><p>Player 1</p><p>Money:</p></body></html>", 0));
        playerTwo->setText(QApplication::translate("Widget", "<html><head/><body><p>Player 2</p><p>Money:</p></body></html>", 0));
        playerThree->setText(QApplication::translate("Widget", "<html><head/><body><p>Player 3</p><p>Money:</p></body></html>", 0));
        playerFour->setText(QApplication::translate("Widget", "<html><head/><body><p>Player 4</p><p>Money:</p></body></html>", 0));
        plOneMoney->setText(QApplication::translate("Widget", "1500", 0));
        plTwoMoney->setText(QApplication::translate("Widget", "1500", 0));
        plThreeMoney->setText(QApplication::translate("Widget", "1500", 0));
        plFourMoney->setText(QApplication::translate("Widget", "1500", 0));
        removePl->setText(QApplication::translate("Widget", "Remove Player", 0));
        addMoneyButton->setText(QApplication::translate("Widget", "Add Money", 0));
        playerAddMoney->clear();
        playerAddMoney->insertItems(0, QStringList()
         << QApplication::translate("Widget", "Player One", 0)
         << QApplication::translate("Widget", "Player Two", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
