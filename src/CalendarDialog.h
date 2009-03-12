#ifndef CALENDARDIALOG_H
#define CALENDARDIALOG_H

#include <QDialog>
#include "ui_createcalendardialog.h"
#include "colorlisteditor.h"

class CalendarDialog : public QDialog, public Ui::CreateCalendarDialog
{
  Q_OBJECT
signals:
  void CalendarInfo(QColor tempColor, QString tempString);
public slots:
  void Show(QColor tempColor, QString tempString);
public:
  CalendarDialog(QWidget *parent = 0);
private slots:
  void ReturnCalendarInfo();
private:
  //ColorListEditor *selectCalendarBox;
};

#endif
