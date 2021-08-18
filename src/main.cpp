#include <QApplication>

#include "gui/mainwidget.h"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  //  app.setFont(QFont("Segoe UI"));
  MainWidget w;

  w.show();
  return app.exec();
}
