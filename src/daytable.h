#ifndef DAYTABLE_H
#define DAYTABLE_H
#include <QTableWidget>
#include "eventwidget.h"
#include "eventdialog.h"

class DayTable : public QTableWidget
{
  Q_OBJECT
signals:
  void CreateEventSignal(QString time, QStringList list, QDate day);
public:
  DayTable(QWidget *parent = 0);
public slots:
  void SetCalendarsList(QStringList list);
private slots:
  void DoubleClicked(int row, int column);
private:
  void SetDateAndDay();
  
  QTableWidgetItem *items[2][48];  
  QTableWidgetItem *time[24];
  //QString date;
  QStringList calendars;
  QStringList labels;
  QDate day;
  EventDialog *eventDialog;
};
#endif

