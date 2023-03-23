#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //リンゴ画像を入れる
    applescence = new QGraphicsScene();
    ui->graphicsView->setScene(applescence);
    QPixmap pixmap(":/res/fruit_ringo.png");
    applescence->addPixmap(pixmap);
}

MainWindow::~MainWindow()
{
    delete applescence;
    delete ui;
}

void MainWindow::on_pushButton_melon_clicked()
{
    qDebug()<< "melon clicked()!";
}

void MainWindow::on_pushButton_apple_clicked()
{
    qDebug()<< "apple clicked()!";
}

void MainWindow::on_PushButton_strawbery_clicked()
{
    qDebug() << "strawbery clicked()!";
}
