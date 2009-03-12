#ifndef EVENTWIDGET_H
#define EVENTWIDGET_H
#include <QWidget>
#include <QLabel>
#include <QListWidget>

class EventWidget : public QWidget
{
  Q_OBJECT
public:
    EventWidget(QString time, QString text, QBrush background);
private:
    QLabel *label;
    QListWidget *list;
};
#endif
