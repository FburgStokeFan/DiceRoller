/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionAbout_DiceRoller;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_9;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *sb_numDice;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_d4;
    QToolButton *btn_d4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl_d6;
    QToolButton *btn_d6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbl_d8;
    QToolButton *btn_d8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lbl_d10;
    QToolButton *btn_d10;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbl_d12;
    QToolButton *btn_d12;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbl_d20;
    QToolButton *btn_d20;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lbl_d100;
    QToolButton *btn_d100;
    QSpacerItem *verticalSpacer;
    QFrame *line_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rb_total;
    QRadioButton *rb_advantage;
    QRadioButton *rb_disadvantage;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *lbl_111;
    QLabel *lbl_results;
    QLabel *label_4;
    QTextEdit *list_rolls;
    QMenuBar *menuBar;
    QMenu *menuDice;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(300, 418);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAbout_DiceRoller = new QAction(MainWindow);
        actionAbout_DiceRoller->setObjectName(QString::fromUtf8("actionAbout_DiceRoller"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_9 = new QHBoxLayout(centralWidget);
        horizontalLayout_9->setSpacing(4);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(4, 4, 4, 8);
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Sunken);
        verticalLayout = new QVBoxLayout(frame_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 0, 6, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame_3);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        sb_numDice = new QSpinBox(frame_3);
        sb_numDice->setObjectName(QString::fromUtf8("sb_numDice"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sb_numDice->sizePolicy().hasHeightForWidth());
        sb_numDice->setSizePolicy(sizePolicy1);
        sb_numDice->setMinimumSize(QSize(70, 0));
        sb_numDice->setMaximumSize(QSize(70, 16777215));
        sb_numDice->setFont(font);
        sb_numDice->setAlignment(Qt::AlignCenter);
        sb_numDice->setAccelerated(true);
        sb_numDice->setMinimum(1);
        sb_numDice->setMaximum(100);

        horizontalLayout->addWidget(sb_numDice);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(frame_3);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lbl_d4 = new QLabel(frame_3);
        lbl_d4->setObjectName(QString::fromUtf8("lbl_d4"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lbl_d4->sizePolicy().hasHeightForWidth());
        lbl_d4->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        lbl_d4->setFont(font1);
        lbl_d4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lbl_d4);

        btn_d4 = new QToolButton(frame_3);
        btn_d4->setObjectName(QString::fromUtf8("btn_d4"));
        btn_d4->setMinimumSize(QSize(40, 40));
        btn_d4->setMaximumSize(QSize(40, 40));
        btn_d4->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/1d4.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_d4->setIcon(icon);
        btn_d4->setIconSize(QSize(40, 40));
        btn_d4->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout_2->addWidget(btn_d4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lbl_d6 = new QLabel(frame_3);
        lbl_d6->setObjectName(QString::fromUtf8("lbl_d6"));
        lbl_d6->setFont(font1);
        lbl_d6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(lbl_d6);

        btn_d6 = new QToolButton(frame_3);
        btn_d6->setObjectName(QString::fromUtf8("btn_d6"));
        btn_d6->setMinimumSize(QSize(40, 40));
        btn_d6->setMaximumSize(QSize(40, 40));
        btn_d6->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/1d6.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_d6->setIcon(icon1);
        btn_d6->setIconSize(QSize(40, 40));

        horizontalLayout_3->addWidget(btn_d6);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lbl_d8 = new QLabel(frame_3);
        lbl_d8->setObjectName(QString::fromUtf8("lbl_d8"));
        lbl_d8->setFont(font1);
        lbl_d8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(lbl_d8);

        btn_d8 = new QToolButton(frame_3);
        btn_d8->setObjectName(QString::fromUtf8("btn_d8"));
        btn_d8->setMinimumSize(QSize(40, 40));
        btn_d8->setMaximumSize(QSize(40, 40));
        btn_d8->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/1d8.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_d8->setIcon(icon2);
        btn_d8->setIconSize(QSize(40, 40));

        horizontalLayout_4->addWidget(btn_d8);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lbl_d10 = new QLabel(frame_3);
        lbl_d10->setObjectName(QString::fromUtf8("lbl_d10"));
        lbl_d10->setFont(font1);
        lbl_d10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(lbl_d10);

        btn_d10 = new QToolButton(frame_3);
        btn_d10->setObjectName(QString::fromUtf8("btn_d10"));
        btn_d10->setMinimumSize(QSize(40, 40));
        btn_d10->setMaximumSize(QSize(40, 40));
        btn_d10->setFont(font);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/1d10.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_d10->setIcon(icon3);
        btn_d10->setIconSize(QSize(40, 40));

        horizontalLayout_5->addWidget(btn_d10);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lbl_d12 = new QLabel(frame_3);
        lbl_d12->setObjectName(QString::fromUtf8("lbl_d12"));
        lbl_d12->setFont(font1);
        lbl_d12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(lbl_d12);

        btn_d12 = new QToolButton(frame_3);
        btn_d12->setObjectName(QString::fromUtf8("btn_d12"));
        btn_d12->setMinimumSize(QSize(40, 40));
        btn_d12->setMaximumSize(QSize(40, 40));
        btn_d12->setFont(font);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/1d12.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_d12->setIcon(icon4);
        btn_d12->setIconSize(QSize(40, 40));

        horizontalLayout_6->addWidget(btn_d12);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lbl_d20 = new QLabel(frame_3);
        lbl_d20->setObjectName(QString::fromUtf8("lbl_d20"));
        lbl_d20->setFont(font1);
        lbl_d20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(lbl_d20);

        btn_d20 = new QToolButton(frame_3);
        btn_d20->setObjectName(QString::fromUtf8("btn_d20"));
        btn_d20->setMinimumSize(QSize(40, 40));
        btn_d20->setMaximumSize(QSize(40, 40));
        btn_d20->setFont(font);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/1d20.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_d20->setIcon(icon5);
        btn_d20->setIconSize(QSize(40, 40));

        horizontalLayout_7->addWidget(btn_d20);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        lbl_d100 = new QLabel(frame_3);
        lbl_d100->setObjectName(QString::fromUtf8("lbl_d100"));
        lbl_d100->setFont(font1);
        lbl_d100->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(lbl_d100);

        btn_d100 = new QToolButton(frame_3);
        btn_d100->setObjectName(QString::fromUtf8("btn_d100"));
        btn_d100->setMinimumSize(QSize(40, 40));
        btn_d100->setMaximumSize(QSize(40, 40));
        btn_d100->setFont(font);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/1d100.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_d100->setIcon(icon6);
        btn_d100->setIconSize(QSize(40, 40));

        horizontalLayout_8->addWidget(btn_d100);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_9->addWidget(frame_3);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_9->addWidget(line_2);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy3);
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Sunken);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 0, 6, 0);
        frame = new QFrame(frame_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 50));
        frame->setFont(font);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(4, 0, 4, 0);
        rb_total = new QRadioButton(frame);
        rb_total->setObjectName(QString::fromUtf8("rb_total"));
        rb_total->setChecked(true);

        verticalLayout_2->addWidget(rb_total);

        rb_advantage = new QRadioButton(frame);
        rb_advantage->setObjectName(QString::fromUtf8("rb_advantage"));
        rb_advantage->setEnabled(false);

        verticalLayout_2->addWidget(rb_advantage);

        rb_disadvantage = new QRadioButton(frame);
        rb_disadvantage->setObjectName(QString::fromUtf8("rb_disadvantage"));
        rb_disadvantage->setEnabled(false);

        verticalLayout_2->addWidget(rb_disadvantage);


        verticalLayout_3->addWidget(frame);

        line_3 = new QFrame(frame_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        lbl_111 = new QLabel(frame_2);
        lbl_111->setObjectName(QString::fromUtf8("lbl_111"));
        lbl_111->setFont(font);

        horizontalLayout_10->addWidget(lbl_111);

        lbl_results = new QLabel(frame_2);
        lbl_results->setObjectName(QString::fromUtf8("lbl_results"));
        sizePolicy3.setHeightForWidth(lbl_results->sizePolicy().hasHeightForWidth());
        lbl_results->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        lbl_results->setFont(font2);
        lbl_results->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 200);"));
        lbl_results->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(lbl_results);


        verticalLayout_3->addLayout(horizontalLayout_10);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout_3->addWidget(label_4);

        list_rolls = new QTextEdit(frame_2);
        list_rolls->setObjectName(QString::fromUtf8("list_rolls"));
        list_rolls->setFont(font1);

        verticalLayout_3->addWidget(list_rolls);


        horizontalLayout_9->addWidget(frame_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 300, 26));
        menuDice = new QMenu(menuBar);
        menuDice->setObjectName(QString::fromUtf8("menuDice"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuDice->menuAction());
        menuDice->addAction(actionAbout_DiceRoller);
        menuDice->addSeparator();
        menuDice->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DiceRoller", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        actionAbout_DiceRoller->setText(QApplication::translate("MainWindow", "About DiceRoller", nullptr));
        label->setText(QApplication::translate("MainWindow", "# Die", nullptr));
        lbl_d4->setText(QApplication::translate("MainWindow", "D4", nullptr));
        btn_d4->setText(QApplication::translate("MainWindow", "Roll D4", nullptr));
        lbl_d6->setText(QApplication::translate("MainWindow", "D6", nullptr));
        btn_d6->setText(QApplication::translate("MainWindow", "Roll D6", nullptr));
        lbl_d8->setText(QApplication::translate("MainWindow", "D8", nullptr));
        btn_d8->setText(QApplication::translate("MainWindow", "Roll D8", nullptr));
        lbl_d10->setText(QApplication::translate("MainWindow", "D10", nullptr));
        btn_d10->setText(QApplication::translate("MainWindow", "Roll D10", nullptr));
        lbl_d12->setText(QApplication::translate("MainWindow", "D12", nullptr));
        btn_d12->setText(QApplication::translate("MainWindow", "Roll D12", nullptr));
        lbl_d20->setText(QApplication::translate("MainWindow", "D20", nullptr));
        btn_d20->setText(QApplication::translate("MainWindow", "Roll D20", nullptr));
        lbl_d100->setText(QApplication::translate("MainWindow", "D100", nullptr));
        btn_d100->setText(QApplication::translate("MainWindow", "Roll D100", nullptr));
        rb_total->setText(QApplication::translate("MainWindow", "Total", nullptr));
        rb_advantage->setText(QApplication::translate("MainWindow", "Advantage", nullptr));
        rb_disadvantage->setText(QApplication::translate("MainWindow", "Disadvantage", nullptr));
        lbl_111->setText(QApplication::translate("MainWindow", "Result:", nullptr));
        lbl_results->setText(QApplication::translate("MainWindow", "-", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "What was rolled:", nullptr));
        menuDice->setTitle(QApplication::translate("MainWindow", "Dice", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
