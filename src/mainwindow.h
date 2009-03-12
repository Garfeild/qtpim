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

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QTabWidget>
#include <QCalendarWidget>
//#include "alarmwidget.h"
#include "calendarwidget.h"
//#include "dialog.h"
#include "sound.h"

class MainWindow : public QMainWindow
{
  Q_OBJECT
public:
  MainWindow();
public slots:
  void StartPlaySound();
  void StopPlaySound();
//signals:
  //void SendFileName(QString fileName);
//private slots:
  //bool Save();
  //bool SaveAs();
private:
  void CreateActions();
  void CreateMenus();
  //bool SaveFile(QString fileName);
  
  //AlarmWidget *alarmWidget;
  QTabWidget *tab;
  CalendarWidget *calendar;
  //Dialog *alarmDialog;
  Sound alarmSound;
  QString currentFile;
  
  QAction *exitAction;
  QAction *saveAction;

  QMenu *fileMenu;
};

#endif 
