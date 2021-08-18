#ifndef THREATPAGEWIDGET_H
#define THREATPAGEWIDGET_H

#include <QWidget>

namespace Ui {
class ThreatPageWidget;
}

class ThreatPageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ThreatPageWidget(QWidget *parent = nullptr);
    ~ThreatPageWidget();

private:
    Ui::ThreatPageWidget *ui;
};

#endif // THREATPAGEWIDGET_H
