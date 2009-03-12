#ifndef LIST_H
#define LIST_H
#include <QMenu>
#include <QAction>
#include <QListWidget>
#include "CalendarDialog.h"
class List : public QListWidget
{
  Q_OBJECT
signals:
  void ItemInfo(QColor tempColor, QString tempString);
  void ReturnCalendarList(QStringList calendars);
private slots:
  void CustomContextMenu(const QPoint &pos);
  void SetCheckBoxState(QListWidgetItem *temp);
  void SendItemInfo();
public slots:
  void SetItemInfo(QColor color, QString text);
public:
  List(QWidget *parent = 0);
private:
  void CreateActions();
  void CreateContextMenu();

  QStringList calendars;
  CalendarDialog *calendarDialog;
  QMenu *menu;
  QAction *createCalendarAction;
  QListWidgetItem *myItem[40];
  int tempRow;
};
#endif

