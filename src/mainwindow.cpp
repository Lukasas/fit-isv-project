#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPushButton>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QList<QPushButton *> buttons = this->findChildren<QPushButton *>();
    for (auto * button : buttons)
    {
         connectButtons(button);
    }

    this->display = this->findChild<QLineEdit*>("display_edit");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberButtonPressed()
{
    QPushButton * btn = qobject_cast<QPushButton*>(sender());
    this->display->setText(this->display->text() + btn->text());
}

void MainWindow::functionButtonPressed()
{
//    this->SetDisplayText(sender()->objectName());
}

void MainWindow::memoryButtonPressed()
{
//    this->SetDisplayText(sender()->objectName());
}

void MainWindow::SetDisplayNumber(double value)
{
    value = value;
}

void MainWindow::SetDisplayText(QString str)
{
    this->display->setText(str);
}

void MainWindow::connectButtons(QPushButton * button)
{
    if (button->objectName().contains("number"))
    {
        connect(button, SIGNAL(pressed()), this, SLOT(numberButtonPressed()));
    }
    else if (button->objectName().contains("fnc"))
    {
        connect(button, SIGNAL(pressed()), this, SLOT(functionButtonPressed()));
    }
}
