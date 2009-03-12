/********************************************************************************
** Form generated from reading ui file 'createcalendardialog.ui'
**
** Created: Mon Feb 11 23:04:22 2008
**      by: Qt User Interface Compiler version 4.3.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_CREATECALENDARDIALOG_H
#define UI_CREATECALENDARDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "colorlisteditor.h"

class Ui_CreateCalendarDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QLabel *nameLabel;
    QHBoxLayout *hboxLayout1;
    QLabel *colorLabel;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout2;
    QLineEdit *lineEdit;
    ColorListEditor *colorlisteditor;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem1;
    QPushButton *createButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *CreateCalendarDialog)
    {
    if (CreateCalendarDialog->objectName().isEmpty())
        CreateCalendarDialog->setObjectName(QString::fromUtf8("CreateCalendarDialog"));
    CreateCalendarDialog->resize(315, 115);
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(CreateCalendarDialog->sizePolicy().hasHeightForWidth());
    CreateCalendarDialog->setSizePolicy(sizePolicy);
    CreateCalendarDialog->setMinimumSize(QSize(315, 115));
    layoutWidget = new QWidget(CreateCalendarDialog);
    layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
    layoutWidget->setGeometry(QRect(11, 12, 295, 94));
    vboxLayout = new QVBoxLayout(layoutWidget);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    vboxLayout->setContentsMargins(0, 0, 0, 0);
    hboxLayout = new QHBoxLayout();
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    vboxLayout1 = new QVBoxLayout();
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    nameLabel = new QLabel(layoutWidget);
    nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

    vboxLayout1->addWidget(nameLabel);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    colorLabel = new QLabel(layoutWidget);
    colorLabel->setObjectName(QString::fromUtf8("colorLabel"));

    hboxLayout1->addWidget(colorLabel);

    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout1->addItem(spacerItem);


    vboxLayout1->addLayout(hboxLayout1);


    hboxLayout->addLayout(vboxLayout1);

    vboxLayout2 = new QVBoxLayout();
    vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
    lineEdit = new QLineEdit(layoutWidget);
    lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
    sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
    lineEdit->setSizePolicy(sizePolicy);
    lineEdit->setMinimumSize(QSize(190, 0));

    vboxLayout2->addWidget(lineEdit);

    colorlisteditor = new ColorListEditor(layoutWidget);
    colorlisteditor->setObjectName(QString::fromUtf8("colorlisteditor"));
    sizePolicy.setHeightForWidth(colorlisteditor->sizePolicy().hasHeightForWidth());
    colorlisteditor->setSizePolicy(sizePolicy);
    colorlisteditor->setMinimumSize(QSize(190, 0));

    vboxLayout2->addWidget(colorlisteditor);


    hboxLayout->addLayout(vboxLayout2);


    vboxLayout->addLayout(hboxLayout);

    hboxLayout2 = new QHBoxLayout();
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout2->addItem(spacerItem1);

    createButton = new QPushButton(layoutWidget);
    createButton->setObjectName(QString::fromUtf8("createButton"));

    hboxLayout2->addWidget(createButton);

    cancelButton = new QPushButton(layoutWidget);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

    hboxLayout2->addWidget(cancelButton);


    vboxLayout->addLayout(hboxLayout2);

    nameLabel->setBuddy(lineEdit);
    colorLabel->setBuddy(colorlisteditor);
    QWidget::setTabOrder(lineEdit, createButton);
    QWidget::setTabOrder(createButton, cancelButton);

    retranslateUi(CreateCalendarDialog);
    QObject::connect(cancelButton, SIGNAL(pressed()), CreateCalendarDialog, SLOT(close()));

    QMetaObject::connectSlotsByName(CreateCalendarDialog);
    } // setupUi

    void retranslateUi(QWidget *CreateCalendarDialog)
    {
    CreateCalendarDialog->setWindowTitle(QApplication::translate("CreateCalendarDialog", "Create calendar dialog", 0, QApplication::UnicodeUTF8));
    nameLabel->setText(QApplication::translate("CreateCalendarDialog", "C&alendar name:", 0, QApplication::UnicodeUTF8));
    colorLabel->setText(QApplication::translate("CreateCalendarDialog", "C&olor:", 0, QApplication::UnicodeUTF8));
    colorlisteditor->clear();
    colorlisteditor->insertItems(0, QStringList()
     << QApplication::translate("CreateCalendarDialog", "aliceblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "antiquewhite", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "aqua", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "aquamarine", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "azure", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "beige", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "bisque", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "black", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "blanchedalmond", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "blue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "blueviolet", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "brown", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "burlywood", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "cadetblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "chartreuse", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "chocolate", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "coral", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "cornflowerblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "cornsilk", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "crimson", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "cyan", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkcyan", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkgoldenrod", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkgray", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkgreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkgrey", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkkhaki", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkmagenta", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkolivegreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkorange", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkorchid", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkred", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darksalmon", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkseagreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkslateblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkslategray", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkslategrey", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkturquoise", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkviolet", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "deeppink", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "deepskyblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "dimgray", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "dimgrey", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "dodgerblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "firebrick", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "floralwhite", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "forestgreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "fuchsia", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "gainsboro", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "ghostwhite", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "gold", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "goldenrod", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "gray", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "green", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "greenyellow", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "grey", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "honeydew", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "hotpink", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "indianred", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "indigo", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "ivory", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "khaki", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lavender", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lavenderblush", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lawngreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lemonchiffon", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightcoral", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightcyan", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightgoldenrodyellow", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightgray", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightgreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightgrey", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightpink", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightsalmon", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightseagreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightskyblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightslategray", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightslategrey", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightsteelblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightyellow", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lime", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "limegreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "linen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "magenta", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "maroon", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mediumaquamarine", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mediumblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mediumorchid", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mediumpurple", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mediumseagreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mediumslateblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mediumspringgreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mediumturquoise", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mediumvioletred", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "midnightblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mintcream", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mistyrose", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "moccasin", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "navajowhite", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "navy", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "oldlace", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "olive", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "olivedrab", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "orange", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "orangered", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "orchid", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "palegoldenrod", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "palegreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "paleturquoise", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "palevioletred", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "papayawhip", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "peachpuff", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "peru", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "pink", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "plum", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "powderblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "purple", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "red", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "rosybrown", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "royalblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "saddlebrown", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "salmon", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "sandybrown", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "seagreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "seashell", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "sienna", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "silver", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "skyblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "slateblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "slategray", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "slategrey", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "snow", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "springgreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "steelblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "tan", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "teal", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "thistle", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "tomato", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "transparent", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "turquoise", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "violet", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "wheat", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "white", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "whitesmoke", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "yellow", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "yellowgreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "aliceblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "antiquewhite", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "aqua", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "aquamarine", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "azure", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "beige", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "bisque", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "black", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "blanchedalmond", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "blue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "blueviolet", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "brown", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "burlywood", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "cadetblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "chartreuse", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "chocolate", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "coral", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "cornflowerblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "cornsilk", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "crimson", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "cyan", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkcyan", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkgoldenrod", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkgray", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkgreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkgrey", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkkhaki", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkmagenta", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkolivegreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkorange", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkorchid", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkred", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darksalmon", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkseagreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkslateblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkslategray", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkslategrey", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkturquoise", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "darkviolet", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "deeppink", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "deepskyblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "dimgray", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "dimgrey", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "dodgerblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "firebrick", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "floralwhite", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "forestgreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "fuchsia", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "gainsboro", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "ghostwhite", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "gold", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "goldenrod", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "gray", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "green", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "greenyellow", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "grey", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "honeydew", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "hotpink", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "indianred", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "indigo", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "ivory", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "khaki", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lavender", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lavenderblush", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lawngreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lemonchiffon", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightcoral", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightcyan", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightgoldenrodyellow", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightgray", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightgreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightgrey", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightpink", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightsalmon", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightseagreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightskyblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightslategray", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightslategrey", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightsteelblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lightyellow", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "lime", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "limegreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "linen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "magenta", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "maroon", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mediumaquamarine", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mediumblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mediumorchid", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mediumpurple", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mediumseagreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mediumslateblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mediumspringgreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mediumturquoise", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mediumvioletred", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "midnightblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mintcream", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "mistyrose", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "moccasin", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "navajowhite", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "navy", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "oldlace", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "olive", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "olivedrab", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "orange", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "orangered", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "orchid", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "palegoldenrod", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "palegreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "paleturquoise", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "palevioletred", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "papayawhip", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "peachpuff", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "peru", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "pink", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "plum", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "powderblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "purple", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "red", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "rosybrown", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "royalblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "saddlebrown", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "salmon", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "sandybrown", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "seagreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "seashell", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "sienna", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "silver", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "skyblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "slateblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "slategray", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "slategrey", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "snow", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "springgreen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "steelblue", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "tan", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "teal", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "thistle", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "tomato", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "transparent", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "turquoise", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "violet", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "wheat", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "white", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "whitesmoke", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "yellow", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CreateCalendarDialog", "yellowgreen", 0, QApplication::UnicodeUTF8)
    );
    createButton->setText(QApplication::translate("CreateCalendarDialog", "C&reate", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("CreateCalendarDialog", "&Cancel", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(CreateCalendarDialog);
    } // retranslateUi

};

namespace Ui {
    class CreateCalendarDialog: public Ui_CreateCalendarDialog {};
} // namespace Ui

#endif // UI_CREATECALENDARDIALOG_H
