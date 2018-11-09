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

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // connect(ui->buttonManual, SIGNAL(clicked()),
    //        IDK, SLOT(OPENURL));

    /*
    // Connect the signal of the horizontal slider to the slot of the first progress bar
    connect(ui->buttonManual, SIGNAL(valueChanged(int)),
            ui->progressBar, SLOT(setValue(int)));


    // Disconnect the first progress bar with disconnect()
    disconnect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
               ui->progressBar, SLOT(setValue(int)));
    */
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonManual_clicked()
{
    QString manualLink = "https://wiki.ubuntu.com/Lubuntu/DocumentationTeam/Manual";
    QDesktopServices::openUrl(QUrl(manualLink));

}

void MainWindow::on_buttonMonitorSetup_clicked()
{
    // Monitor Setup link:
    // This is in: /usr/share/applications/lxrandr.desktop

}

void MainWindow::on_buttonControlCenter_clicked()
{
}

void MainWindow::on_buttonCommunity_clicked()
{
    // This will open up another UI window that contains more community specific information
}

void MainWindow::on_buttonContribute_clicked()
{
    QString contributeLink = "https://launchpad.net/~lubuntu-wiki-docs";
    QDesktopServices::openUrl(QUrl(contributeLink));
}
