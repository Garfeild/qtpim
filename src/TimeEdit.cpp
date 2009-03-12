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

//time.cpp
///////////////////////////////////////////////////////////
#include "TimeEdit.h"
///////////////////////////////////////////////////////////
//Методы и слота класса TimeEdit.
//---------------------------------------------------------
//Конструктор класса TimeEdit.
TimeEdit::TimeEdit(QWidget *parent)
  : QTimeEdit(parent)
{
  setDisplayFormat("hh:mm");
  setFixedSize(70,30);
  connect(this, SIGNAL(editingFinished()),
      this, SLOT(ReturnEntry()));
}
//---------------------------------------------------------
//Слот SetEntry класса TimeEdit передачи текущего значения в поле ввода.
void TimeEdit::SetEntry()
{
  QString entry;  //Создаем переменную для хранения значения на время выполнения тела слота.
  entry = sectionText(QDateTimeEdit::HourSection) + ":" + sectionText(QDateTimeEdit::MinuteSection);  //Задаем значение переменной в виде HH:MM.
  emit ReturnEntry(entry); //Генерируем сигнал ReturnEntry(), который передает значение переменной entry другому объекту.
}
//---------------------------------------------------------
void TimeEdit::ReturnEntry()
{
  timeEditEntry = sectionText(QDateTimeEdit::HourSection) + ":" + sectionText(QDateTimeEdit::MinuteSection); 
}

QString TimeEdit::ReturnTimeEditEntry()
{
  return timeEditEntry;
}
///////////////////////////////////////////////////////////
