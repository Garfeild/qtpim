#ifndef CREATENEWEVENTDIALOG_H
#define CREATENEWEVENTDIALOG_H

#include <QDialog>
#include "ui_createneweventdialog.h"

class EventDialog : public QDialog, public Ui::CreateNewEvent
{
  Q_OBJECT
signals:
    void ReturnEvent(QString calendar, QString time1, QString time2, QString text);
public:
    EventDialog(QWidget *parent = 0);
public slots:
    void CreateEvent(QString time, QStringList list, QDate date);
    void ReturnEventInfo();
};

#endif
