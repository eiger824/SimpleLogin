#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QFontDatabase>
#include <QFont>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->label->setStyleSheet("border: 2px solid black;");
    //ui->label_2->setStyleSheet("border: 2px solid black;");
    ui->lineEdit->setStyleSheet("border: 1px solid black;");
    ui->pushButton_11->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateLabel(bool success)
{
    if (success) {
        ui->label_2->setText("Login correct!");
        ui->label_2->setStyleSheet("color: green;");
    } else {
        ui->label_2->setText("Failed login");
        ui->label_2->setStyleSheet("color: red;");
    }
    //reset m_type
    m_typed.clear();
}

void MainWindow::on_pushButton_clicked()
{

    //check for last key
    if (m_typed.size() == 3) {
        m_typed += ui->pushButton->text();
        ui->lineEdit->setText(m_typed);
        if (m_typed == m_pin) {
            qDebug() << "CORRECT!";
            updateLabel(true);
            //set button visible
            ui->pushButton_11->setVisible(true);
        } else {
            updateLabel(false);
        }
    } else {
        m_typed += ui->pushButton->text();
        ui->lineEdit->setText(m_typed);
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    //check for last key
    if (m_typed.size() == 3) {
        m_typed += ui->pushButton_2->text();
        ui->lineEdit->setText(m_typed);
        if (m_typed == m_pin) {
            qDebug() << "CORRECT!";
            updateLabel(true);
            //set button visible
            ui->pushButton_11->setVisible(true);
        } else {
            updateLabel(false);
        }
    } else {
        m_typed += ui->pushButton_2->text();
        ui->lineEdit->setText(m_typed);
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    //check for last key
    if (m_typed.size() == 3) {
        m_typed += ui->pushButton_3->text();
        ui->lineEdit->setText(m_typed);
        if (m_typed == m_pin) {
            qDebug() << "CORRECT!";
            updateLabel(true);
            //set button visible
            ui->pushButton_11->setVisible(true);
        } else {
            updateLabel(false);
        }
    } else {
        m_typed += ui->pushButton_3->text();
        ui->lineEdit->setText(m_typed);
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    //check for last key
    if (m_typed.size() == 3) {
        m_typed += ui->pushButton_4->text();
        ui->lineEdit->setText(m_typed);
        if (m_typed == m_pin) {
            qDebug() << "CORRECT!";
            updateLabel(true);
            //set button visible
            ui->pushButton_11->setVisible(true);
        } else {
            updateLabel(false);
        }
    } else {
        m_typed += ui->pushButton_4->text();
        ui->lineEdit->setText(m_typed);
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    //check for last key
    if (m_typed.size() == 3) {
        m_typed += ui->pushButton_6->text();
        ui->lineEdit->setText(m_typed);
        if (m_typed == m_pin) {
            qDebug() << "CORRECT!";
            updateLabel(true);
            //set button visible
            ui->pushButton_11->setVisible(true);
        } else {
            updateLabel(false);
        }
    } else {
        m_typed += ui->pushButton_6->text();
        ui->lineEdit->setText(m_typed);
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    //check for last key
    if (m_typed.size() == 3) {
        m_typed += ui->pushButton_5->text();
        ui->lineEdit->setText(m_typed);
        if (m_typed == m_pin) {
            qDebug() << "CORRECT!";
            updateLabel(true);
            //set button visible
            ui->pushButton_11->setVisible(true);
        } else {
            updateLabel(false);
        }
    } else {
        m_typed += ui->pushButton_5->text();
        ui->lineEdit->setText(m_typed);
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    //check for last key
    if (m_typed.size() == 3) {
        m_typed += ui->pushButton_7->text();
        ui->lineEdit->setText(m_typed);
        if (m_typed == m_pin) {
            qDebug() << "CORRECT!";
            updateLabel(true);
            //set button visible
            ui->pushButton_11->setVisible(true);
        } else {
            updateLabel(false);
        }
    } else {
        m_typed += ui->pushButton_7->text();
        ui->lineEdit->setText(m_typed);
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    //check for last key
    if (m_typed.size() == 3) {
        m_typed += ui->pushButton_9->text();
        ui->lineEdit->setText(m_typed);
        if (m_typed == m_pin) {
            qDebug() << "CORRECT!";
            updateLabel(true);
            //set button visible
            ui->pushButton_11->setVisible(true);
        } else {
            updateLabel(false);
        }
    } else {
        m_typed += ui->pushButton_9->text();
        ui->lineEdit->setText(m_typed);
    }
}

void MainWindow::on_pushButton_8_clicked()
{
    //check for last key
    if (m_typed.size() == 3) {
        m_typed += ui->pushButton_8->text();
        ui->lineEdit->setText(m_typed);
        if (m_typed == m_pin) {
            qDebug() << "CORRECT!";
            updateLabel(true);
            //set button visible
            ui->pushButton_11->setVisible(true);
        } else {
            updateLabel(false);
        }
    } else {
        m_typed += ui->pushButton_8->text();
        ui->lineEdit->setText(m_typed);
    }
}
void MainWindow::on_pushButton_10_clicked()
{
    //check for last key
    if (m_typed.size() == 3) {
        m_typed += ui->pushButton_10->text();
        ui->lineEdit->setText(m_typed);
        if (m_typed == m_pin) {
            qDebug() << "CORRECT!";
            updateLabel(true);
            //set button visible
            ui->pushButton_11->setVisible(true);
        } else {
            updateLabel(false);
        }
    } else {
        m_typed += ui->pushButton_10->text();
        ui->lineEdit->setText(m_typed);
    }
}

void MainWindow::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_12_clicked()
{
    QApplication::quit();
}
