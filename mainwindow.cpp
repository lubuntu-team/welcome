// Copyright (C) 2018 Lubuntu

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopServices>
#include <QUrl>
#include <QDir>
#include <QProcess>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonManual_clicked()
{
    QString manualLink = "https://manual.lubuntu.me";
    QDesktopServices::openUrl(QUrl(manualLink));
}

void MainWindow::on_buttonMonitorSetup_clicked()
{
    QProcess *process = new QProcess(this);
    QString file = "/usr/bin/lxqt-config-monitor";
    process->start(file);
}

void MainWindow::on_buttonLXQtConfigurationCenter_clicked()
{
    QProcess *process = new QProcess(this);
    QString file = "/usr/bin/lxqt-config";
    process->start(file);
}

void MainWindow::on_buttonCommunity_clicked()
{
    QString contributeLink = "https://lubuntu.me/links/";
    QDesktopServices::openUrl(QUrl(contributeLink));
}

void MainWindow::on_buttonContribute_clicked()
{
    QString contributeLink = "https://phab.lubuntu.me/w/contributor-guide/";
    QDesktopServices::openUrl(QUrl(contributeLink));
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this, "About", "Created by Samuel Banya\n\n© Lubuntu 2018");
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}
