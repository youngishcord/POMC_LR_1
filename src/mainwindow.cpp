#include "mainwindow.h"
#include "taskOne.h"

#include <QLabel>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , taskTabs(new QTabWidget(this))
{
    this->setWindowTitle("Test App");
    this->setFixedSize(400, 500);

    setCentralWidget(taskTabs);
    taskTabs->addTab(new TaskOneWidget(this), "Задание №1");
    taskTabs->addTab(new QLabel("Tab 1 Content"), "Tab 1");
    taskTabs->addTab(new QLabel("Tab 2 Content"), "Tab 2");
}

MainWindow::~MainWindow()
{
    // ?
}
