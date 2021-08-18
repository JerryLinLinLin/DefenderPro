#include "homepagewidget.h"
#include "ui_homepagewidget.h"

HomePageWidget::HomePageWidget(QWidget *parent)
    : QWidget(parent), ui(new Ui::HomePageWidget) {
  ui->setupUi(this);

  //  QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect;
  //  effect->setBlurRadius(5);
  //  effect->setXOffset(5);
  //  effect->setYOffset(5);
  //  effect->setColor(Qt::black);

  //  ui->pushButton->setGraphicsEffect(effect);

  // ui->->setGraphicsEffect(effect);
}

HomePageWidget::~HomePageWidget() { delete ui; }

Ui::HomePageWidget *HomePageWidget::getUi() const { return ui; }

/*
 *   https://stackoverflow.com/a/8817908
 */
void HomePageWidget::paintEvent(QPaintEvent *) {
  QStyleOption opt;
  opt.initFrom(this);
  QPainter p(this);
  style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
