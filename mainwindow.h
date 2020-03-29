#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <random>
#include <chrono>
#include <ctime>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    std::mt19937_64 generator;
    QFont selected = QFont("Arial",14,QFont::Bold);
    QFont normal   = QFont("Arial",10,QFont::Normal);

private slots:
    void on_actionExit_triggered();
    void on_btn_d100_clicked();
    void on_btn_d10_clicked();
    void on_btn_d12_clicked();
    void on_btn_d20_clicked();
    void on_btn_d4_clicked();
    void on_btn_d6_clicked();
    void on_btn_d8_clicked();
    void on_rb_advantage_clicked();
    void on_rb_disadvantage_clicked();
    void on_rb_total_clicked();
    void on_sb_numDice_valueChanged(int arg1);
    void on_actionAbout_DiceRoller_triggered();

private:
    Ui::MainWindow *ui;
    quint32 roll(int limit);
    void showResults(int limit);
    void doClear();
    void highlightSelection(int val);
};

#endif // MAINWINDOW_H
