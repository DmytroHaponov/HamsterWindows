#ifndef WINDOWDRAGGER_H
#define WINDOWDRAGGER_H

#include <QWidget>
#include <QMouseEvent>

class WindowDragger : public QWidget
{
    Q_OBJECT

public:
    explicit WindowDragger(QWidget *parent = 0);
    
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

    void paintEvent(QPaintEvent *);

    bool   mousePressed;
    QPoint mousePos;
    QPoint wndPos;
};

#endif // WINDOWDRAGGER_H
