#include "widgets/customnumberinput.h"

#include <QRegularExpressionValidator>
#include <QValidator>

#include <iostream>

NumberInput::NumberInput(QWidget* parent)
    : QLineEdit(parent)
{
    QRegularExpression rx("\\d+\\.\\d+");
    this->setValidator(new QRegularExpressionValidator(rx, this));
    this->setFixedHeight(30);
}

NumberInput::~NumberInput()
{

}

float NumberInput::getValue()
{
    return this->text().toFloat();
}