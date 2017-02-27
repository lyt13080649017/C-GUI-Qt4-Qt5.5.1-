#include "sortdialog.h"
#include "ui_sortdialog.h"

sortdialog::sortdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sortdialog)
{
    ui->setupUi(this);
}

sortdialog::~sortdialog()
{
    delete ui;
}
