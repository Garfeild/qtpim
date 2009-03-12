#include <QtGui>
#include "CalendarDialog.h"

CalendarDialog::CalendarDialog(QWidget *parent)
  :QDialog(parent)
{
       QItemEditorFactory *factory = new QItemEditorFactory;

     QItemEditorCreatorBase *colorListCreator =
         new QStandardItemEditorCreator<ColorListEditor>();

     factory->registerEditor(QVariant::Color, colorListCreator);

     QItemEditorFactory::setDefaultFactory(factory);
  //<selectCalendarBox = new ColorListEditor;
  setupUi(this);
  connect(createButton, SIGNAL(clicked()),
      this, SLOT(ReturnCalendarInfo()));
}

void CalendarDialog::Show(QColor tempColor, QString tempString)
{
  colorlisteditor->setColor(tempColor);
  lineEdit->setText(tempString);
  show();
}

void CalendarDialog::ReturnCalendarInfo()
{
  //QStringList colorNames = QColor::colorNames();
  //QColor color(colorNames[4]);

  close();
  //emit CalendarInfo(color, lineEdit->text());
  emit CalendarInfo(colorlisteditor->color(), lineEdit->text());
}
