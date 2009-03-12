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

//timeedit.h
///////////////////////////////////////////////////////////
#ifndef TIMEEDIT_H
#define TIMEEDIT_H
///////////////////////////////////////////////////////////
//Заголовочный файл, содержащий описание класса TimeEdit.
//Данный класс является дочерним классом от класса QTimeEdit. Содержит в себе
//необходимые для реализации работы программы слоты и сигналы.
///////////////////////////////////////////////////////////
#include <QWidget>  //Заголовочный файл, содержащий описание класса QWidget. Необходим для реализации работы виджета.
#include <QTimeEdit>  //Заголовочный файл, содержащий описание класса QTimeEdit.
#include <QDateTimeEdit>  //Заголовочный файл, содеражащий описание класса QDateTimeEdit. Для реализации необходимой работы слотов и сигналов.
///////////////////////////////////////////////////////////
//Описание класса.
class TimeEdit : public QTimeEdit
{
  Q_OBJECT
public:
    TimeEdit(QWidget *parent = 0);  //Конструктор.
    QString ReturnTimeEditEntry();
signals:
    void ReturnEntry(QString entry);  //Сигнал, возвращающий текущее значение в поле ввода виджета.
public slots:
    void SetEntry();  //Закрытый слот, установки значения, которое будет передано вместе с сигналом ReturnEntry.
    void ReturnEntry();
private:
    QString timeEditEntry;
};
///////////////////////////////////////////////////////////
#endif

