#include "eventwidget.h"
#include <QLayout>
EventWidget::EventWidget(QString time, QString text, QBrush background)
{
  label = new QLabel(time);
  list = new QListWidget;
  QListWidgetItem *eventItem = new QListWidgetItem;
  
  eventItem->setText(text);
  eventItem->setBackground(background);
  //label->setBackground(background);

  list->insertItem(0, eventItem);

  QVBoxLayout *main = new QVBoxLayout; 
  main->addWidget(label);
  main->addWidget(list);
  setLayout(main);
}
