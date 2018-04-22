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

double MainWindow::GetDisplayNumber(bool &ok) const
{
    return GetDisplayText().toDouble(&ok);
}

void MainWindow::numberButtonPressed()
{
    QPushButton * btn = qobject_cast<QPushButton*>(sender());
    this->display->setText(this->display->text() + btn->text());
}

void MainWindow::functionButtonPressed()
{
    bool ok;
    QString fn = sender()->objectName();
    fn = fn.right(3);

    double dn = GetDisplayNumber(ok);

    SetDisplayText("");
    if (fn == "RET")
    {
        SetDisplayNumber(c.fnCall(dn, fn.toStdString()));
        c.Clean();
    }
    else if (fn == "CLR")
    {
        SetDisplayText("");
    }
    else
        c.fnCall(dn, fn.toStdString());
}

void MainWindow::memoryButtonPressed()
{
//    this->SetDisplayText(sender()->objectName());
}

void MainWindow::SetDisplayNumber(double value)
{
    SetDisplayText(QString("%1").arg(value, 0, 'g', 5));
}

void MainWindow::SetDisplayText(QString str)
{
    this->display->setText(str);
}

QString MainWindow::GetDisplayText() const
{
    return this->display->text();
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
