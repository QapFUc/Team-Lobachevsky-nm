#include "tablewindow.h"
#include "ui_tablewindow.h"

TableWindow::TableWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TableWindow)
{
    ui->setupUi(this);
    //output.cfg
}

TableWindow::~TableWindow()
{
    delete ui;
}