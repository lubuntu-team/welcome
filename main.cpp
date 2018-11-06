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
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;
    w.show();

    // Manual Button

    // Monitor Setup Button

    // Control Center Button

    // Community Button

    // Contribute Button

    /*
    // News Button
    QPushButton *buttonNews = new QPushButton("Latest news for Lubuntu", &window);

    // Change Monitor Settings Button
    QPushButton *buttonMonitorSettings = new QPushButton("Change monitor settings", &window);

    // Change Desktop Resolution Button
    QPushButton *buttonDesktopResolution = new QPushButton("Change desktop resolution", &window);

    // Icon Theme Button
    QPushButton *buttonIconTheme = new QPushButton("Latest icon themes for Lubuntu", &window);

    // Bug Button
    QPushButton *buttonBug = new QPushButton("Report bugs to Lubuntu team", &window);

    // Manual Button
    QPushButton *buttonManual = new QPushButton("Read manual for Lubuntu help", &window);

    // Quit Functionality (Using SIGNAL event, and QApplication::instance())
    // connect(m_button, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));

    // Window window;
    window.show();

    */

    return app.exec();

}
