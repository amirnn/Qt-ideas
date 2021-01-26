#include <QApplication>
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>
#include <QMainWindow>
#include <QGridLayout>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // create main window.
    QMainWindow mainWindow;

    // create a widget that spans the entire main window
    QWidget *mainWidget = new QWidget();
    mainWindow.setCentralWidget(mainWidget);
    
    // Create a label and an input field for the name:
    QLabel* labelName = new QLabel("Name: ");
    QLineEdit* lineEditName = new QLineEdit();
    lineEditName->setPlaceholderText("Enter your name here: ");

    // Create a label and an input spin box for the age
    QLabel* labelAge = new QLabel("Age: ");
    QSpinBox* spinBoxAge = new QSpinBox();
    spinBoxAge->setMinimum(0);
    spinBoxAge->setMaximum(300);
    spinBoxAge->setValue(50);

    //create grid layout and assing the widgets to the grid locations
    QGridLayout* gridLayout = new QGridLayout();
    gridLayout->addWidget(labelName,0,0);
    gridLayout->addWidget(lineEditName,0,1);
    gridLayout->addWidget(labelAge,1,0);
    gridLayout->addWidget(spinBoxAge,1,1);

    mainWidget->setLayout(gridLayout);

    // Show the window
    mainWindow.show();
    
    return app.exec();
}
