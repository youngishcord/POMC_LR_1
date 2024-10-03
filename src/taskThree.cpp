#include "taskThree.h"
#include "widgets/customnumberinput.h"

#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QObject>
#include <QDebug>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QButtonGroup>
#include <QChart>
#include <QChartView>
#include <QLineSeries>
// #include <QSplineSeries>

#include <iostream>
#include <cmath>

TaskThreeWidget::TaskThreeWidget(QWidget* parent)
    : QWidget(parent)
    , xMin(new NumberInput(this))
    , xMax(new NumberInput(this))
    , xStep(new NumberInput(this))
    , drawBt(new QPushButton(this))
    , spline(new QSplineSeries())
    , chart(new QChart())
{
    QVBoxLayout* layout = new QVBoxLayout(this);
    this->setLayout(layout);

    QChartView* chartView = new QChartView(this);
    chartView->setChart(chart);
    layout->addWidget(chartView);

    chart->addSeries(spline);
    spline->setName("Function");

    chart->createDefaultAxes();

    QHBoxLayout* semilay = new QHBoxLayout();
    semilay->addWidget(new QLabel("min x:"));
    semilay->addWidget(xMin);
    semilay->addWidget(new QLabel("max x:"));
    semilay->addWidget(xMax);
    semilay->addWidget(new QLabel("step:"));
    semilay->addWidget(xStep);
    semilay->addWidget(drawBt);
    drawBt->setText("Построить");
    connect(drawBt, &QPushButton::clicked, this, &TaskThreeWidget::drawPlot);

    layout->addLayout(semilay);
    

}

TaskThreeWidget::~TaskThreeWidget()
{
    // ?
}

void TaskThreeWidget::drawPlot()
{
    this->spline->clear();
    double max = -10000;
    double min = 10000;

    for (double x = -0.75; x <= -2.05; x += -0.2) {
        double res = this->calculate(x);
        if (res > max) { max = res; }
        if (res < min) { min = res; }
        this->spline->append(x, res);
    }
    this->chart->zoomIn(QRect(QPoint(-0.75, min), QPoint(-2.05, max)));
}

double TaskThreeWidget::calculate(double x) {
    return 9 * pow(x, 4) + sin(57.2 + x);
}