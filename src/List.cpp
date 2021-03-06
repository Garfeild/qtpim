#include "List.h"
List::List(QWidget *parent)
  :QListWidget(parent)
{
  calendarDialog = new CalendarDialog; 
  menu = new QMenu(this);
  for(int i=0; i<40; i++)
  {
    myItem[i] = new QListWidgetItem;
    myItem[i]->setFlags(Qt::ItemIsUserCheckable);
    myItem[i]->setFlags(Qt::ItemIsEditable);
    myItem[i]->setCheckState(Qt::Unchecked);
  }

  tempRow = 0;

  createCalendarAction = new QAction("Create calendar", this);

  menu->addAction(createCalendarAction);

  setContextMenuPolicy(Qt::CustomContextMenu);


  //for(int i=0; i<40; i++)
  //{
  //  insertItem(i, myItem[i]);
  //}

  connect(this, SIGNAL(itemClicked(QListWidgetItem*)),
      this, SLOT(SetCheckBoxState(QListWidgetItem*)));
  connect(createCalendarAction, SIGNAL(triggered()),
      this,SLOT(SendItemInfo()));
  connect(this, SIGNAL(ItemInfo(QColor, QString)),
      calendarDialog, SLOT(Show(QColor, QString)));
  connect(this, SIGNAL(customContextMenuRequested(const QPoint &)),
      this, SLOT(CustomContextMenu(const QPoint &)));
  connect(calendarDialog, SIGNAL(CalendarInfo(QColor, QString)),
      this, SLOT(SetItemInfo(QColor, QString)));
}

void List::SetCheckBoxState(QListWidgetItem *temp)
{
  if(temp->checkState() == Qt::Unchecked)
    temp->setCheckState(Qt::Checked);
  else
    temp->setCheckState(Qt::Unchecked);
}

void List::CustomContextMenu(const QPoint &pos)
{
  QPoint globalPos = this->mapToGlobal(pos);
  tempRow++;
  menu->exec(globalPos);
}

void List::SendItemInfo()
{
  emit ItemInfo(myItem[tempRow]->background().color(), myItem[tempRow]->text());
}

void List::SetItemInfo(QColor color, QString text)
{
  //tempRow = tempRow + 1;
  
  QBrush tempBr(color, Qt::SolidPattern);
  insertItem(tempRow, myItem[tempRow]);
  myItem[tempRow]->setBackground(tempBr);
  myItem[tempRow]->setText(text);
  calendars.append(myItem[tempRow]->text());
  emit ReturnCalendarList(calendars);
}
