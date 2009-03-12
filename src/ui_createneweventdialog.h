/********************************************************************************
** Form generated from reading ui file 'createneweventdialog.ui'
**
** Created: Mon Feb 11 23:04:22 2008
**      by: Qt User Interface Compiler version 4.3.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_CREATENEWEVENTDIALOG_H
#define UI_CREATENEWEVENTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "TimeEdit.h"

class Ui_CreateNewEvent
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QLabel *label;
    QLabel *labelEventName;
    QLabel *labelDescription;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout1;
    QComboBox *selectCalendarBox;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout2;
    QLineEdit *eventNameInput;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QTextEdit *textEdit;
    QHBoxLayout *hboxLayout3;
    QHBoxLayout *hboxLayout4;
    QLabel *labelDataEdit;
    QDateEdit *dateEdit;
    QSpacerItem *spacerItem3;
    QHBoxLayout *hboxLayout5;
    QLabel *labelTime1;
    TimeEdit *timeedit1;
    QHBoxLayout *hboxLayout6;
    QLabel *labelTime2;
    TimeEdit *timeedit2;
    QSpacerItem *spacerItem4;
    QHBoxLayout *hboxLayout7;
    QSpacerItem *spacerItem5;
    QPushButton *createButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem6;

    void setupUi(QDialog *CreateNewEvent)
    {
    if (CreateNewEvent->objectName().isEmpty())
        CreateNewEvent->setObjectName(QString::fromUtf8("CreateNewEvent"));
    CreateNewEvent->resize(572, 339);
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(CreateNewEvent->sizePolicy().hasHeightForWidth());
    CreateNewEvent->setSizePolicy(sizePolicy);
    layoutWidget = new QWidget(CreateNewEvent);
    layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
    layoutWidget->setGeometry(QRect(10, 10, 554, 320));
    vboxLayout = new QVBoxLayout(layoutWidget);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    vboxLayout->setContentsMargins(0, 0, 0, 0);
    hboxLayout = new QHBoxLayout();
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    vboxLayout1 = new QVBoxLayout();
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    label = new QLabel(layoutWidget);
    label->setObjectName(QString::fromUtf8("label"));

    vboxLayout1->addWidget(label);

    labelEventName = new QLabel(layoutWidget);
    labelEventName->setObjectName(QString::fromUtf8("labelEventName"));

    vboxLayout1->addWidget(labelEventName);

    labelDescription = new QLabel(layoutWidget);
    labelDescription->setObjectName(QString::fromUtf8("labelDescription"));

    vboxLayout1->addWidget(labelDescription);


    hboxLayout->addLayout(vboxLayout1);

    vboxLayout2 = new QVBoxLayout();
    vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    selectCalendarBox = new QComboBox(layoutWidget);
    selectCalendarBox->setObjectName(QString::fromUtf8("selectCalendarBox"));
    sizePolicy.setHeightForWidth(selectCalendarBox->sizePolicy().hasHeightForWidth());
    selectCalendarBox->setSizePolicy(sizePolicy);
    selectCalendarBox->setMinimumSize(QSize(400, 0));

    hboxLayout1->addWidget(selectCalendarBox);

    spacerItem = new QSpacerItem(61, 24, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

    hboxLayout1->addItem(spacerItem);


    vboxLayout2->addLayout(hboxLayout1);

    hboxLayout2 = new QHBoxLayout();
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    eventNameInput = new QLineEdit(layoutWidget);
    eventNameInput->setObjectName(QString::fromUtf8("eventNameInput"));
    sizePolicy.setHeightForWidth(eventNameInput->sizePolicy().hasHeightForWidth());
    eventNameInput->setSizePolicy(sizePolicy);
    eventNameInput->setMinimumSize(QSize(400, 0));

    hboxLayout2->addWidget(eventNameInput);

    spacerItem1 = new QSpacerItem(61, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

    hboxLayout2->addItem(spacerItem1);


    vboxLayout2->addLayout(hboxLayout2);

    spacerItem2 = new QSpacerItem(461, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

    vboxLayout2->addItem(spacerItem2);


    hboxLayout->addLayout(vboxLayout2);


    vboxLayout->addLayout(hboxLayout);

    textEdit = new QTextEdit(layoutWidget);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));
    QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
    textEdit->setSizePolicy(sizePolicy1);
    textEdit->setMaximumSize(QSize(550, 150));

    vboxLayout->addWidget(textEdit);

    hboxLayout3 = new QHBoxLayout();
    hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
    hboxLayout4 = new QHBoxLayout();
    hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
    labelDataEdit = new QLabel(layoutWidget);
    labelDataEdit->setObjectName(QString::fromUtf8("labelDataEdit"));

    hboxLayout4->addWidget(labelDataEdit);

    dateEdit = new QDateEdit(layoutWidget);
    dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

    hboxLayout4->addWidget(dateEdit);


    hboxLayout3->addLayout(hboxLayout4);

    spacerItem3 = new QSpacerItem(151, 32, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

    hboxLayout3->addItem(spacerItem3);

    hboxLayout5 = new QHBoxLayout();
    hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
    labelTime1 = new QLabel(layoutWidget);
    labelTime1->setObjectName(QString::fromUtf8("labelTime1"));

    hboxLayout5->addWidget(labelTime1);

    timeedit1 = new TimeEdit(layoutWidget);
    timeedit1->setObjectName(QString::fromUtf8("timeedit1"));

    hboxLayout5->addWidget(timeedit1);


    hboxLayout3->addLayout(hboxLayout5);

    hboxLayout6 = new QHBoxLayout();
    hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
    labelTime2 = new QLabel(layoutWidget);
    labelTime2->setObjectName(QString::fromUtf8("labelTime2"));

    hboxLayout6->addWidget(labelTime2);

    timeedit2 = new TimeEdit(layoutWidget);
    timeedit2->setObjectName(QString::fromUtf8("timeedit2"));

    hboxLayout6->addWidget(timeedit2);


    hboxLayout3->addLayout(hboxLayout6);

    spacerItem4 = new QSpacerItem(5, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

    hboxLayout3->addItem(spacerItem4);


    vboxLayout->addLayout(hboxLayout3);

    hboxLayout7 = new QHBoxLayout();
    hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
    spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

    hboxLayout7->addItem(spacerItem5);

    createButton = new QPushButton(layoutWidget);
    createButton->setObjectName(QString::fromUtf8("createButton"));
    sizePolicy.setHeightForWidth(createButton->sizePolicy().hasHeightForWidth());
    createButton->setSizePolicy(sizePolicy);

    hboxLayout7->addWidget(createButton);

    cancelButton = new QPushButton(layoutWidget);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    sizePolicy.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
    cancelButton->setSizePolicy(sizePolicy);

    hboxLayout7->addWidget(cancelButton);

    spacerItem6 = new QSpacerItem(5, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

    hboxLayout7->addItem(spacerItem6);


    vboxLayout->addLayout(hboxLayout7);

    label->setBuddy(selectCalendarBox);
    labelEventName->setBuddy(eventNameInput);
    labelDescription->setBuddy(textEdit);
    labelDataEdit->setBuddy(dateEdit);
    labelTime1->setBuddy(timeedit1);
    labelTime2->setBuddy(timeedit2);
    QWidget::setTabOrder(selectCalendarBox, eventNameInput);
    QWidget::setTabOrder(eventNameInput, textEdit);
    QWidget::setTabOrder(textEdit, dateEdit);
    QWidget::setTabOrder(dateEdit, timeedit1);
    QWidget::setTabOrder(timeedit1, timeedit2);
    QWidget::setTabOrder(timeedit2, createButton);
    QWidget::setTabOrder(createButton, cancelButton);

    retranslateUi(CreateNewEvent);
    QObject::connect(cancelButton, SIGNAL(clicked()), CreateNewEvent, SLOT(close()));

    QMetaObject::connectSlotsByName(CreateNewEvent);
    } // setupUi

    void retranslateUi(QDialog *CreateNewEvent)
    {
    CreateNewEvent->setWindowTitle(QApplication::translate("CreateNewEvent", "Create new event", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("CreateNewEvent", "Ca&lendar:", 0, QApplication::UnicodeUTF8));
    labelEventName->setText(QApplication::translate("CreateNewEvent", "&Event Name:", 0, QApplication::UnicodeUTF8));
    labelDescription->setText(QApplication::translate("CreateNewEvent", "&Description:", 0, QApplication::UnicodeUTF8));
    textEdit->setHtml(QApplication::translate("CreateNewEvent", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    labelDataEdit->setText(QApplication::translate("CreateNewEvent", "D&ate:", 0, QApplication::UnicodeUTF8));
    labelTime1->setText(QApplication::translate("CreateNewEvent", "Time: From", 0, QApplication::UnicodeUTF8));
    labelTime2->setText(QApplication::translate("CreateNewEvent", "To", 0, QApplication::UnicodeUTF8));
    createButton->setText(QApplication::translate("CreateNewEvent", "C&reate", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("CreateNewEvent", "&Cancel", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(CreateNewEvent);
    } // retranslateUi

};

namespace Ui {
    class CreateNewEvent: public Ui_CreateNewEvent {};
} // namespace Ui

#endif // UI_CREATENEWEVENTDIALOG_H
