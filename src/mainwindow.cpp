/***************************************************************************
 *   GalarmQ version 0.2                                                   *
 *   Copyright (C) 2007 by Anton "Garfeild" Kolchunov                      *
 *   kolchunovad (at) gmail.com or garfeild.ubuntu (at) gmail.com          *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA .        *
 ***************************************************************************/
#include <QtGui>
#include "mainwindow.h"
///////////////////////////////////////////////////////////
//Методы и слоты класса MainWindow.
//---------------------------------------------------------
//Конструктор класса MainWindow.
MainWindow::MainWindow()
{
  //alarmWidget = new AlarmWidget;  //Инициализация объекта alarmWidget.
  //alarmDialog = new Dialog; //Инициализация объекта alarmDialog.
  calendar = new CalendarWidget;
  tab = new QTabWidget; 
  setCentralWidget(tab); //Устанавливаем alarmWidgetцентральным виджетом.

  tab->setTabPosition(QTabWidget::East);
  //tab->addTab(alarmWidget, "Alarm Clock");
  tab->addTab(calendar, "Calendar");

  CreateActions();  //Создаем действия.
  CreateMenus();  //Создаем меню.

  InitAL(); //Инициализация звуковой подсистемы.
  
  //connect(alarmWidget,SIGNAL(Found(QString, QString)), 
  //        alarmDialog, SLOT(ShowDialog(QString, QString)));
 //Соединяем сигнал Opened() диалогового окна со слотом StartAlarm()
 //главного окна.
  //connect(alarmDialog, SIGNAL(Opened()),
  //        this, SLOT(StartPlaySound()));
  //Соединяем сигнал Closed() диалогового окна со слотом StopAlarm() главного
  //окна.
  //connect(alarmDialog, SIGNAL(Closed()),
  //        this, SLOT(StopPlaySound()));
  
  //connect(this, SIGNAL(SendFileName(QString)),
  //    alarmWidget, SLOT(WriteFile(QString)));
  
  setMinimumSize(600,400);
  resize(600,400);
}
//---------------------------------------------------------
//Метод класса CreateActions, создающий действия.
void MainWindow::CreateActions()
{
  saveAction = new QAction("&Save", this);
  saveAction->setShortcut(tr("Ctrl+S"));
  saveAction->setStatusTip("Save list of alarms");
  //connect(saveAction, SIGNAL(triggered()),
  //    this, SLOT(SaveAs()));

  exitAction = new QAction("E&xit", this);
  exitAction->setShortcut(tr("Ctrl+X"));
  exitAction->setStatusTip("Exit GalamQ application");
  connect(exitAction, SIGNAL(triggered()), 
      this, SLOT(close()));
}
//---------------------------------------------------------
//Метод CreateMenus, создающий меню.
void MainWindow::CreateMenus()
{
  fileMenu = menuBar()->addMenu("&File");
  fileMenu->addAction(saveAction);
  fileMenu->addAction(exitAction);
}

void MainWindow::StartPlaySound()
{
  alarmSound.LoadData();
  alarmSound.Play();
}

void MainWindow::StopPlaySound()
{
  alarmSound.Stop();
}

/*bool MainWindow::Save()
{
    if (currentFile.isEmpty()) 
    {
        return SaveAs();
    } 
    else 
    {
        return SaveFile(currentFile);
    }
}
*/
/*bool MainWindow::SaveAs()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                               tr("Save list of alarms"), ".",
                               tr("Alarms' lists (*.al)"));
    if (fileName.isEmpty())
        return false;

    return SaveFile(fileName);
}

bool MainWindow::SaveFile(QString fileName)
{
  emit SendFileName(fileName);
  return true;
}*/
