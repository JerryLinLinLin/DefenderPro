#ifndef HOMEPAGEWIDGET_H
#define HOMEPAGEWIDGET_H

#include <QGraphicsDropShadowEffect>
#include <QPainter>
#include <QStyleOption>
#include <QWidget>

namespace Ui {
class HomePageWidget;
}

class HomePageWidget : public QWidget {
  Q_OBJECT

public:
  explicit HomePageWidget(QWidget *parent = nullptr);
  ~HomePageWidget();

  Ui::HomePageWidget *getUi() const;

private:
  Ui::HomePageWidget *ui;

  friend class MainWidget;

  void paintEvent(QPaintEvent *);
};

#endif // HOMEPAGEWIDGET_H
