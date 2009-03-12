#ifndef CALENDARWIDGET_H
#define CALENDARWIDGET_H
#include <QCalendarWidget>
#include <QListWidget>
#include "daytable.h"
#include "List.h"

class CalendarWidget : public QWidget
{
  Q_OBJECT
public:
    CalendarWidget(QWidget *parent = 0);
private:
    QCalendarWidget *qCalendar;
    //QListWidget *list;
    DayTable *dayTable;
    List *list;
};
#endif

