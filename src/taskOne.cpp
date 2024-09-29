#include "taskOne.h"
#include "moc_taskOne.cpp"
#include "widgets/customnumberinput.h"

#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QObject>
#include <QDebug>

#include <iostream>

TaskOneWidget::TaskOneWidget(QWidget* parent)
    : QWidget(parent)
    , xValue(new NumberInput(this))
    , yValue(new NumberInput(this))
    , zValue(new NumberInput(this))
{
    QGridLayout* layout = new QGridLayout(this);

    layout->addWidget(new QLabel("Введите значение X:"), 0, 0);
    layout->addWidget(xValue, 0, 1);

    layout->addWidget(new QLabel("Введите значение X:"), 1, 0);
    layout->addWidget(yValue, 1, 1);

    layout->addWidget(new QLabel("Введите значение X:"), 2, 0);
    layout->addWidget(zValue, 2, 1);

    button = new QPushButton("test", this);
    QObject::connect(button, &QPushButton::clicked, this, &TaskOneWidget::testPrint);
    layout->addWidget(button);
}

TaskOneWidget::~TaskOneWidget()
{
    // ?
}

void TaskOneWidget::testPrint()
{
    qDebug() << xValue->getValue() << "\n";
}