#include "dialog.h"
#include "ui_dialog.h"
const static double PI = 3.1415926;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_Calc_pushButton_clicked()
{
    bool ok;
    QString tempStr;
    QString valuesStr = ui->R_lineEdit->text();
    int valueInt = valuesStr.toInt(&ok);
    double area = valueInt * valueInt * PI;
    ui->AR_label->setText(tempStr.setNum(area));
}

void Dialog::on_R_lineEdit_textChanged(const QString &arg1)
{
    bool ok;
    QString tempStr;
    QString valueStr = ui->R_lineEdit->text();
    int valueInt = valueStr.toInt(&ok);
    double area = valueInt * valueInt * PI;
    ui->AR_label->setText(tempStr.setNum(area));

}
