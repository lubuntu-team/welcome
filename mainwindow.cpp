// Copyright (C) 2019 Lubuntu

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
    QString contributeLink = "https://manual.lubuntu.me/stable/B/Contributing.html";
    QDesktopServices::openUrl(QUrl(contributeLink));
}

void MainWindow::on_actionAbout_triggered()
{
    // QAction: this class helps provide icons and images for individual methods
    // http://doc.qt.io/qt-5/qaction.html
    // I need to find out how to insert the Lubuntu logo with this method
    QMessageBox::information(this, "About", "Created By:\n\nSamuel Banya (Developer)\nSimon Quigley (Lubuntu Release Manager)\nArtem Abutalipov (UX/UI Designer)\n\n© Lubuntu 2019");
}

void MainWindow::on_actionExit_triggered()
{
    // Tell the user that since the checkbox is unchecked, the Welcome Center will NOT run on
    // startup (COMMENTED OUT FOR LATER RESEARCH)

    // Related Documentation:
    // http://doc.qt.io/qt-5/qt.html#CheckState-enum

    // if ui->checkBox->QCheckBox::checkState(Unchecked) {
       // QMessageBox::information(this, "The Lubuntu Welcome Center will now NOT begin on startup.\nThank you for installing Lubuntu!");
    // }
    QApplication::quit();
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    // Add checkbox stateChanged functionality that depends on a boolean variable of it being checked:
    // http://doc.qt.io/qt-5/qml-qtquick-controls-checkbox.html#checkedState-prop
}
