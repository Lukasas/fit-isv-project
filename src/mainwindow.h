#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <cCalculator.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    enum _function{
        SUM,
        SUB,
        MUL,
        DIV,
        FACT,
        SIN,
        POW,
        SQRT
    };

    double GetDisplayNumber(bool & ok) const;
    void SetDisplayNumber(double value);
    void SetDisplayText(QString str);
    QString GetDisplayText() const;
private slots:
//    void on_pushButton_5_clicked();
    void numberButtonPressed();
    void functionButtonPressed();
    void memoryButtonPressed();
private:
    Ui::MainWindow *ui;
    QLineEdit * display;
    void connectButtons(QPushButton *);
    cCalculator c;
};

#endif // MAINWINDOW_H
