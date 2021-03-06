#include <QStyleOption>
#include <QPainter>
#include "windowdragger.h"

WindowDragger::WindowDragger(QWidget *parent): QWidget(parent)
{
    mousePressed = false;
}

void WindowDragger::mousePressEvent(QMouseEvent *event)
{
    mousePressed = true;
    mousePos = event->globalPos();

    QWidget *parent = parentWidget();

    if(parent)
        wndPos = parent->pos();
}

void WindowDragger::mouseMoveEvent(QMouseEvent *event)
{
    QWidget *parent = parentWidget();

    if(parent && mousePressed)
        parent->move(wndPos + (event->globalPos() - mousePos));
}

void WindowDragger::mouseReleaseEvent(QMouseEvent *)
{
    mousePressed = false;
}

void WindowDragger::paintEvent(QPaintEvent *)
{
    QStyleOption styleOption;
    styleOption.init(this);
    QPainter painter(this);
    style()->drawPrimitive(QStyle::PE_Widget, &styleOption, &painter, this);
}

