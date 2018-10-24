#include "window.h"
#include <QApplication>
#include <QPushButton>

Window::Window(QWidget *parent) :
    QWidget(parent)
    {
    // Set size of the window
    setFixedSize(800, 600);

    // Font
    QFont font ("Courier");

    // Button Format
    // (x pos, y pos, width, length)

    // News Button
    m_button = new QPushButton("Latest news for Lubuntu", this);
    m_button->setGeometry(300, 50, 250, 30);
    m_button->setToolTip("Click here for the lastest news for Lubuntu 18.40 Cosmic Cuttlefish!");
    m_button->setFont(font);

    // Icon Theme Button
    m_button = new QPushButton("Latest icon themes for Lubuntu", this);
    m_button->setGeometry(220, 150, 400, 30);
    m_button->setToolTip("Click here to download the latest icon themes for Lubuntu 18.40 Cosmic Cuttlefish");
    m_button->setFont(font);

    // Bug Button
    m_button = new QPushButton("Report bugs to Lubuntu team", this);
    m_button->setGeometry(220, 250, 400, 30);
    m_button->setToolTip("Click here to report bugs to the Lubuntu development team!");
    m_button->setFont(font);

    // Manual Button
    m_button = new QPushButton("Read manual for Lubuntu help", this);
    m_button->setGeometry(220, 350, 400, 30);
    m_button->setToolTip("Click here to access the manual for Lubuntu 18.40 Cosmic Cuttlefish!");
    m_button->setFont(font);

    // Quit Button
    m_button = new QPushButton("Quit", this);
    m_button->setGeometry(300, 450, 250, 30);
    m_button->setToolTip("Click here to quit the Welcome Center!");
    m_button->setFont(font);

    // Quit Functionality (Using SIGNAL event, and QApplication::instance())
    // connect(m_button, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));
    }
