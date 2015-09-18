#include "nicewnd.h"
#include <QFontDatabase>
#include <QFont>
#include "customshadoweffect.h"
#include <QPainter>

NiceWnd::NiceWnd(QWidget *parent): QWidget(parent)
{
  setWindowFlags(Qt::FramelessWindowHint);
  setAttribute(Qt::WA_TranslucentBackground);
  QFontDatabase::addApplicationFont(":/fonts/AlternateGotNo3D.ttf");
  QFont hamFont("AlternateGotNo3D", 12);
  setupUi(this);
  useSlider->setFont(hamFont);

  niceTitle->hide();

  bodyShadow->setBlurRadius(10.0);
  // bodyShadow->setDistance(3.0);
  bodyShadow->setColor(QColor(40, 40, 40, 60));
  bodyShadow->setEnabled(false);
  niceBody->setGraphicsEffect(bodyShadow);

  //niceBody->addAction();
}

void NiceWnd::on_closeButton_2_clicked()
{
  NiceWnd::close();
}

void NiceWnd::on_minimizeButton_2_clicked()
{
 // setWindowFlags(Qt::WindowMaximizeButtonHint);
  //this->show();
}

void NiceWnd::paintEvent(QPaintEvent *)
{
  QPainter painter(this);
  r=5; g=5; b=5;
  QPen linepen(QColor(r, g, b, 255));
  linepen.setWidth(5);
//QBrush br(QColor(200, 200, 200, 255),  Qt::SolidPattern);

QRect bound(10,10,50,50);//  QPoint p1;
  //  p1.setX(10);
  //  p1.setY(10);

  //  QPoint p2;
  //  p2.setX(100);
  //  p2.setY(300);

  painter.setPen(linepen);
  painter.drawEllipse(bound);
 // painter.fillRect(bound,br);
 // painter.drawLine(30,20,30,500);
}

void NiceWnd::on_toggle_but_clicked(bool checked)
{
  if (checked)
    {
      niceTitle_2->hide();
      niceBody_2->hide();
      niceBody_3->hide();
      niceBody_4->hide();
      toggle_grey->hide();
      bodyShadow->setEnabled(true);
      niceTitle->show();
      toggle_but->move(385, 165);
      toggle_green->show();
    }
  else
    {
      niceTitle->hide();
      toggle_green->hide();
      toggle_grey->show();
      niceTitle_2->show();
      niceBody_2->show();
      niceBody_3->show();
      niceBody_4->show();
      bodyShadow->setEnabled(false);
      toggle_but->move(190, 165);
    }
}
