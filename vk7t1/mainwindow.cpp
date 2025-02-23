#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->count, &QPushButton::clicked, this, &MainWindow::count);
    connect(ui->reset, &QPushButton::clicked, this, &MainWindow::reset);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::count()
{
    ui->lineEdit->setText(QString::number(ui->lineEdit->text().toInt() + 1));
}

void MainWindow::reset()
{
    ui->lineEdit->setText("0");
}
