#include "daytable.h"
#include <QHeaderView>
#include <QDate>
DayTable::DayTable(QWidget *parent)
  :QTableWidget(parent)
{
  eventDialog = new EventDialog;
  for(int i=0; i<48; i++)
  {
    items[0][i] = new QTableWidgetItem;
    items[1][i] = new QTableWidgetItem;
    if(i%2)
      items[0][i]->setText("30");
    else
      items[0][i]->setText("00");
  }
  
  for(int i=0; i<24; i++)
  {
    time[i] = new QTableWidgetItem;
    if(i<10)
      time[i]->setText("0"+QString::number(i,10));
    else
      time[i]->setText(QString::number(i,10));   
  }
  
  labels << "" << "";
  
  setRowCount(48);
  setColumnCount(3);
  
  verticalHeader()->hide();
  
  for(int i=0; i<48; i+=2)
    setSpan(i,0,2,1);
  
  for(int i=0; i<24; i++)
    setItem(i*2, 0, time[i]);

  for(int i=0; i<48; i++)
  {
    setItem(i, 1, items[0][i]);
    setItem(i, 2, items[1][i]);
  }

  connect(this, SIGNAL(cellDoubleClicked(int,int)),
      this, SLOT(DoubleClicked(int, int)));
  connect(this, SIGNAL(CreateEventSignal(QString, QStringList, QDate)),
      eventDialog, SLOT(CreateEvent(QString, QStringList, QDate)));
  

  SetDateAndDay();
  setHorizontalHeaderLabels(labels);
  
  horizontalHeader()->resizeSection(0,30);
  horizontalHeader()->resizeSection(1,30);
  horizontalHeader()->setResizeMode(0, QHeaderView::Fixed);
  horizontalHeader()->setResizeMode(1, QHeaderView::Fixed);
  horizontalHeader()->setResizeMode(2, QHeaderView::Stretch);
  //QBrush br(QColor(255,0,0,123),Qt::SolidPattern);

}

void DayTable::SetDateAndDay()
{
  //date = QDate::currentDate().toString("dddd dd.MM.yyyy");
  day = QDate::currentDate();
  labels.append(day.toString("dddd dd.MM.yyyy"));
}

void DayTable::DoubleClicked(int row, int column)
{
  //QStringList list;
  //list << "Personal" << "Work";
  //QString temp1, temp2;
  //temp1 = labels.value(0);
  //for(int i=0; i<10; i++)
  //  temp2 += temp1[i];
  
  if(column == 2)
  emit CreateEventSignal(time[row]->text() + ":" + items[0][row]->text(), calendars, day);

  //temp2 = item(row, column)->text();
  //EventWidget *eventWidget = new EventWidget(temp1, temp2, br);
  //setCellWidget(row, column, eventWidget);
}

void DayTable::SetCalendarsList(QStringList list)
{
  calendars = list;
}

