#include <QtGui>
#include "eventdialog.h"

EventDialog::EventDialog(QWidget *parent)
  : QDialog(parent)
{
  setupUi(this);

  dateEdit->setDisplayFormat("dd.MM.yyyy");

  connect(createButton, SIGNAL(clicked()),
        this, SLOT(ReturnEventInfo()));
}

void EventDialog::CreateEvent(QString time, QStringList list, QDate date)
{
  timeedit1->setTime(QTime::fromString(time, "hh:mm"));
  timeedit2->setTime(QTime::fromString(time, "hh:mm"));
  dateEdit->setDate(date);
  selectCalendarBox->clear();
  selectCalendarBox->insertItems(0, list);
  show();
}

void EventDialog::ReturnEventInfo()
{
  QString time1, time2;
  time1 = timeedit1->sectionText(QDateTimeEdit::HourSection) + ":" + timeedit1->sectionText(QDateTimeEdit::MinuteSection); 
  time2 = timeedit2->sectionText(QDateTimeEdit::HourSection) + ":" + timeedit2->sectionText(QDateTimeEdit::MinuteSection); 
  
  close();
  emit ReturnEvent(selectCalendarBox->currentText(), time1, time2, textEdit->toPlainText());
}
