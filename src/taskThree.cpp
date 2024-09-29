#include "taskThree.h"
#include "widgets/customnumberinput.h"

#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QObject>
#include <QDebug>
#include <QHBoxLayout>
#include <QButtonGroup>

#include <iostream>
#include <cmath>

TaskThreeWidget::TaskThreeWidget(QWidget* parent)
    : QWidget(parent)
    , xMin(new NumberInput(this))
    , xMax(new NumberInput(this))
{
    
}

TaskThreeWidget::~TaskThreeWidget()
{
    // ?
}

void TaskThreeWidget::printResult()
{

}