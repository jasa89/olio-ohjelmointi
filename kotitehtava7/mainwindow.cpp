#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->txtResult->setText("0");
    ui->labelInfo->setText("Painiketta Count painettu 0 kertaa");
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_btnCount_clicked() {
    counter++; // Kasvata laskuria
    QString s = QString::number(counter);
    ui->txtResult->setText(s); // Päivitä lineEdit
    ui->labelInfo->setText("Painiketta Count painettu " + s +
                           " kertaa"); // Päivitä label
}

void MainWindow::on_btnReset_clicked() {
    counter = 0;                 // Nollaa laskuri
    ui->txtResult->setText("0"); // Päivitä lineEdit
    ui->labelInfo->setText("Painiketta Count painettu 0 kertaa"); // Päivitä label
}
