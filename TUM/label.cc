#include <QApplication>
#include <QLabel>
#include <QMainWindow>

int main(int argc, char *argv[])
{
    // QApplication manages the GUI application’s control flow
    QApplication app(argc, argv);

    // create a main window
    QMainWindow mainWindow;

    // create a widget that spans the entire main window
    QWidget *mainWidget = new QWidget();
    mainWindow.setCentralWidget(mainWidget);

    // create a label with the main widget as parent
    QLabel *label = new QLabel("Hello World!", mainWidget);
    label->setStyleSheet("QLabel { color: red; font-size:14pt; }");

    // Show the window
    mainWindow.show();
    // Start the application's event loop
    return app.exec();
}
