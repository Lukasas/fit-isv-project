/**
*	@file mainwindow.h
*	@author Lukáš Chábek (xchabe00)
*	@brief Zpracovani akci GUI
*/
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
    /**
     * @brief GetDisplayNumber
     * Returns value from display already converted into double.
     * @param ok Serves as an test if the conversion was successful.
     * @return Numeric value on display.
     */
    double GetDisplayNumber(bool & ok) const;
    /**
     * @brief SetDisplayNumber
     * Sets display text to entered value.
     * @param value Number that will be printed on display.
     */
    void SetDisplayNumber(double value);
    /**
     * @brief SetDisplayText
     * Sets display with input text.
     * @param str Text that will be printed on the display.
     */
    void SetDisplayText(QString str);

    /**
     * @brief GetDisplayText
     * Gets text that is currently on display.
     * @return Text from display.
     */
    QString GetDisplayText() const;
private slots:
//    void on_pushButton_5_clicked();
    void numberButtonPressed();
    void functionButtonPressed();
    void memoryButtonPressed();
private:
    Ui::MainWindow *ui;
    QLineEdit * display;
    /**
     * @brief connectButtons
     * Function that connects buttons signal with slots.
     */
    void connectButtons(QPushButton *);
    cCalculator c;
};

#endif // MAINWINDOW_H
