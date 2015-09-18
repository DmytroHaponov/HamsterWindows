#ifndef NICEWND_H
#define NICEWND_H
#include "customshadoweffect.h"
#include "ui_nicewnd.h"

class NiceWnd : public QWidget, private Ui::NiceWnd
{
    Q_OBJECT
    
public:
    explicit NiceWnd(QWidget *parent = 0);
        CustomShadowEffect *bodyShadow = new CustomShadowEffect();
private slots:

  void on_closeButton_2_clicked();
  void on_minimizeButton_2_clicked();
  void on_toggle_but_clicked(bool checked);

private:

    void paintEvent(QPaintEvent *event);
    int r, g, b;
};

#endif // NICEWND_H
