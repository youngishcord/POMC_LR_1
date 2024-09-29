#ifndef TASKTHREE_H
#define TASKTHREE_H

#include <QWidget>
#include <QPushButton>
#include <QPlainTextEdit>
#include <QRadioButton>

#include "widgets/customnumberinput.h"

class TaskThreeWidget : public QWidget {
    Q_OBJECT

public: 
    explicit TaskThreeWidget(QWidget* parent = nullptr);
    ~TaskThreeWidget();

private:
    NumberInput* xMin;
    NumberInput* xMax;

private slots:
    void printResult();
};

#endif // TASKTHREE_H