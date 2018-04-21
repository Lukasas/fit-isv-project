#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
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

    double GetDisplayNumber() const;
    void SetDisplayNumber(double value);
    void SetDisplayText(QString str);
private slots:
//    void on_pushButton_5_clicked();
    void numberButtonPressed();
    void functionButtonPressed();
private:
    Ui::MainWindow *ui;
    QLineEdit * display;
    void connectButtons(QPushButton *);

};

#endif // MAINWINDOW_H
