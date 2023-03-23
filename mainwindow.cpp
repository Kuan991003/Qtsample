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
    //正解不正解文字列の初期化
    ui->labeljudge->setText("");
}

MainWindow::~MainWindow()
{
    delete applescence;
    delete ui;
}

void MainWindow::on_pushButton_melon_clicked()
{
    qDebug()<< "melon clicked()!";

    //間違い表示
    ui->labeljudge->setText("worng");
}

void MainWindow::on_pushButton_apple_clicked()
{
    qDebug()<< "apple clicked()!";
    ui->labeljudge->setText("correct");
}

void MainWindow::on_PushButton_strawbery_clicked()
{
    qDebug() << "strawbery clicked()!";
    //間違い表示
    ui->labeljudge->setText("worng");
}
