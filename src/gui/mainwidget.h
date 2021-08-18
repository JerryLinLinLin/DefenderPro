#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QDebug>
#include <QGraphicsDropShadowEffect>
#include <QMouseEvent>
#include <QPointF>
#include <QWidget>

#include "ui_aboutpagewidget.h"
#include "ui_homepagewidget.h"
#include "ui_scanpagewidget.h"
#include "ui_settingpagewidget.h"
#include "ui_threatpagewidget.h"
#include "ui_updatepagewidget.h"

#include "sidemenuwidget.h"
#include "stylesheetwrapper.h"

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget {
  Q_OBJECT

public:
  explicit MainWidget(QWidget *parent = nullptr);
  ~MainWidget();

protected:
  void mousePressEvent(QMouseEvent *evt);
  void mouseMoveEvent(QMouseEvent *evt);

private:
  Ui::MainWidget *ui;
  QPointF oldPos;

  QString cssStyle{};

public slots:
  void changeStylesheet();
  void updateChoice(Component myChoice);
};

#endif // MAINWIDGET_H
