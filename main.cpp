#include <QApplication>
#include <QPushButton>
#include "window.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    // Set size of the window
    QWidget window;
    window.setFixedSize(800, 600);

    // Font
    QFont font ("Courier");

    // Button Format
    // (x pos, y pos, width, length)

    // News Button
    QPushButton *buttonNews = new QPushButton("Latest news for Lubuntu", &window);
    buttonNews->setGeometry(300, 50, 250, 30);
    buttonNews->setToolTip("Click here for the lastest news for Lubuntu 18.40 Cosmic Cuttlefish!");
    buttonNews->setFont(font);

    // Change Monitor Settings Button
    QPushButton *buttonMonitorSettings = new QPushButton("Change monitor settings", &window);
    buttonMonitorSettings->setGeometry(300, 125, 250, 30);
    buttonMonitorSettings->setToolTip("Click here to change your monitor settings!");
    buttonMonitorSettings->setFont(font);

    // Change Desktop Resolution Button
    QPushButton *buttonDesktopResolution = new QPushButton("Change desktop resolution", &window);
    buttonDesktopResolution->setGeometry(300, 200, 250, 30);
    buttonDesktopResolution->setToolTip("Click here to change your desktop resolution!");
    buttonDesktopResolution->setFont(font);

    // Icon Theme Button
    QPushButton *buttonIconTheme = new QPushButton("Latest icon themes for Lubuntu", &window);
    buttonIconTheme->setGeometry(225, 275, 400, 30);
    buttonIconTheme->setToolTip("Click here to download the latest icon themes for Lubuntu 18.40 Cosmic Cuttlefish");
    buttonIconTheme->setFont(font);

    // Bug Button
    QPushButton *buttonBug = new QPushButton("Report bugs to Lubuntu team", &window);
    buttonBug->setGeometry(225, 350, 400, 30);
    buttonBug->setToolTip("Click here to report bugs to the Lubuntu development team!");
    buttonBug->setFont(font);

    // Manual Button
    QPushButton *buttonManual = new QPushButton("Read manual for Lubuntu help", &window);
    buttonManual->setGeometry(225, 425, 400, 30);
    buttonManual->setToolTip("Click here to access the manual for Lubuntu 18.40 Cosmic Cuttlefish!");
    buttonManual->setFont(font);

    // Quit Button
    QPushButton *buttonQuit = new QPushButton("Quit", &window);
    buttonQuit->setGeometry(300, 500, 250, 30);
    buttonQuit->setToolTip("Click here to quit the Welcome Center!");
    buttonQuit->setFont(font);

    // Quit Functionality (Using SIGNAL event, and QApplication::instance())
    // connect(m_button, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));

    // Window window;
    window.show();

    return app.exec();
}
