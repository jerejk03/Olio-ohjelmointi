#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , number1("")
    , number2("")
    , state(0)
    , result(0)
    , operand(-1)
{
    ui->setupUi(this);
    connect(ui->n0, &QPushButton::clicked, this, &MainWindow::numbers);
    connect(ui->n1, &QPushButton::clicked, this, &MainWindow::numbers);
    connect(ui->n2, &QPushButton::clicked, this, &MainWindow::numbers);
    connect(ui->n3, &QPushButton::clicked, this, &MainWindow::numbers);
    connect(ui->n4, &QPushButton::clicked, this, &MainWindow::numbers);
    connect(ui->n5, &QPushButton::clicked, this, &MainWindow::numbers);
    connect(ui->n6, &QPushButton::clicked, this, &MainWindow::numbers);
    connect(ui->n7, &QPushButton::clicked, this, &MainWindow::numbers);
    connect(ui->n8, &QPushButton::clicked, this, &MainWindow::numbers);
    connect(ui->n9, &QPushButton::clicked, this, &MainWindow::numbers);

    connect(ui->add, &QPushButton::clicked, this, &MainWindow::addSubMulDiv);
    connect(ui->sub, &QPushButton::clicked, this, &MainWindow::addSubMulDiv);
    connect(ui->mul, &QPushButton::clicked, this, &MainWindow::addSubMulDiv);
    connect(ui->div, &QPushButton::clicked, this, &MainWindow::addSubMulDiv);

    connect(ui->clear, &QPushButton::clicked, this, &MainWindow::clearAndEnter);
    connect(ui->enter, &QPushButton::clicked, this, &MainWindow::clearAndEnter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numbers()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: " <<name;
    QString value = button->text();

    if (state == 0) {
        number1 += value;
        ui->num1->setText(number1);
    } else if (state == 2) {
        number2 += value;
        ui->num2->setText(number2);
    }
}

void MainWindow::clearAndEnter()
{
    if (sender() == ui->clear) {
        // Tyhjennetään kaikki, jos painetaan "clear"-nappia
        number1 = "";
        number2 = "";
        result = 0;
        operand = -1;
        state = 0;
        ui->num1->clear();
        ui->num2->clear();
        ui->result->clear();
        qDebug()<<"clear";
    } else if (sender() == ui->enter) {
        // Suoritetaan laskutoimitus ja näytetään tulos
        float n1 = number1.toFloat();
        float n2 = number2.toFloat();
        qDebug()<<"enter";
    switch (operand) {
    case 0:
        result = n1 + n2;
        break;
    case 1:
        result = n1 - n2;
        break;
    case 2:
        result = n1 * n2;
        break;
    case 3:
        result = n1 / n2;
        break;
    default:
        result = 0;
        break;
    }
    ui->result->setText(QString::number(result));
    //number1 = QString::number(result);
    //number2 = "";
    state = 1;
    }
}

void MainWindow::addSubMulDiv()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());

    if (button == ui->add) {
        operand = 0;
    } else if (button == ui->sub) {
        operand = 1;
    } else if (button == ui->mul) {
        operand = 2;
    } else if (button == ui->div) {
        operand = 3;
    } else {
        operand = -1;
    }

    if (state == 0) {
        state = 2;
    }
    qDebug() << "operand";
}
