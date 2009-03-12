#include <QtGui>
#include "calendarwidget.h"

CalendarWidget::CalendarWidget(QWidget *parent)
  : QWidget(parent)
{
  qCalendar = new QCalendarWidget;
  list = new List;
  dayTable = new DayTable;

  list->setMaximumWidth(220);
  qCalendar->setMaximumSize(220, 190);

  connect(list, SIGNAL(ReturnCalendarList(QStringList)),
      dayTable, SLOT(SetCalendarsList(QStringList)));

  QVBoxLayout *right = new QVBoxLayout;
  right->addWidget(list);
  right->addWidget(qCalendar);

  QVBoxLayout *left = new QVBoxLayout;
  left->addWidget(dayTable);
  
  QGridLayout *main = new QGridLayout;
  main->addLayout(right, 0, 0, 0);
  main->addLayout(left, 0, 1, 0);
  //main->setColumn
  setLayout(main);
}

