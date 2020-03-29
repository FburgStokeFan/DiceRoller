#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>
#include <QTime>
#include <QThread>
#include <random>
#include <chrono>
#include <ctime>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    on_sb_numDice_valueChanged(ui->sb_numDice->value());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_d4_clicked()
{
    showResults(4);
}

void MainWindow::on_btn_d6_clicked()
{    
    showResults(6);
}

void MainWindow::on_btn_d8_clicked()
{
    showResults(8);
}

void MainWindow::on_btn_d10_clicked()
{
    showResults(10);
}

void MainWindow::on_btn_d12_clicked()
{
    showResults(12);
}

void MainWindow::on_btn_d20_clicked()
{
    showResults(20);
}

void MainWindow::on_btn_d100_clicked()
{
    showResults(100);
}

void MainWindow::doClear()
{
    ui->list_rolls->clear();
    ui->lbl_results->clear();
}

quint32 MainWindow::roll(int limit)
{
    unsigned int theSeed =
            static_cast<unsigned int>(std::chrono::high_resolution_clock::now().time_since_epoch().count());

    //std::mt19937_64 generator;
    generator.seed(theSeed);
    std::uniform_int_distribution<int> distribution(1,limit);
    int dice_roll = distribution(generator);
    qApp->processEvents(QEventLoop::ProcessEventsFlag::AllEvents);
    return static_cast<quint32>(dice_roll);
}

void MainWindow::showResults(int limit)
{
    ui->list_rolls->clear();
    ui->lbl_results->setText("Rolling...");
    qApp->processEvents();
    QThread::msleep(500);
    quint32 total = 0;
    quint32 low = 1e8;
    quint32 high = 0;
    QString listRolls, rolls;
    for(int i = 0; i < ui->sb_numDice->value(); i++) {
        quint32 res = roll(limit);
        res < low ? low = res : low;
        res > high ? high = res : high;
        total = total + res;
        QThread::msleep(3);
        listRolls = listRolls.append(QString::number(res));
        if(i < ui->sb_numDice->value()-1) {
            listRolls = listRolls.append(", ");
        }
    }

    ui->list_rolls->setText(listRolls);

    rolls = QString("%1d%2").arg(ui->sb_numDice->value()).arg(limit);

    if(ui->rb_total->isChecked()) {
        ui->lbl_results->setText(QString("%1").arg(total));
    } else if(ui->rb_advantage->isChecked()) {
        ui->lbl_results->setText(QString("%1").arg(high));
    } else {
        ui->lbl_results->setText(QString("%1").arg(low));
    }

}

void MainWindow::on_sb_numDice_valueChanged(int arg1)
{
    ui->list_rolls->clear();
    ui->lbl_results->clear();

    ui->lbl_d4->setText(QString("%1d4").arg(arg1));
    ui->lbl_d6->setText(QString("%1d6").arg(arg1));
    ui->lbl_d8->setText(QString("%1d8").arg(arg1));
    ui->lbl_d10->setText(QString("%1d10").arg(arg1));
    ui->lbl_d12->setText(QString("%1d12").arg(arg1));
    ui->lbl_d20->setText(QString("%1d20").arg(arg1));
    ui->lbl_d100->setText(QString("%1d100").arg(arg1));

    if(arg1 == 2) {
        ui->rb_advantage->setEnabled(true);
        ui->rb_disadvantage->setEnabled(true);
    } else {
        ui->rb_total->setChecked(true);
        ui->rb_advantage->setEnabled(false);
        ui->rb_disadvantage->setEnabled(false);
    }
}

void MainWindow::on_rb_total_clicked()
{
    doClear();
}

void MainWindow::on_rb_advantage_clicked()
{
    doClear();
}

void MainWindow::on_rb_disadvantage_clicked()
{
    doClear();
}

void MainWindow::on_actionExit_triggered()
{
    close();
}

void MainWindow::on_actionAbout_DiceRoller_triggered()
{
    QMessageBox::information(this,"DiceRoller","DiceRoller\nBuild w/Qt 5.12.2\nMichael Campbell\nMarch 2020\nhttps://github.com/FburgStokeFan");
}
