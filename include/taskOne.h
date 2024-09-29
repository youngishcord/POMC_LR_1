#ifndef TASKONE_H
#define TASKONE_H

#include <QWidget>
#include <QPushButton>

#include "widgets/customnumberinput.h"

class TaskOneWidget : public QWidget {
    Q_OBJECT

public: 
    explicit TaskOneWidget(QWidget* parent = nullptr);
    ~TaskOneWidget();

private:
    NumberInput* xValue;
    NumberInput* yValue;
    NumberInput* zValue;

    QPushButton* button;

private slots:
    void testPrint();
};

// #include "taskOne.moc"

#endif // TASKONE_H