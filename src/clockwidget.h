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

//clockwidget.h
///////////////////////////////////////////////////////////
#ifndef CLOCKWIDGET_H
#define CLOCKWIDGET_H
///////////////////////////////////////////////////////////
//Загловочный файл, содержащий описание класса ClockWidget, который состоит из
//виджета QLCDNumber, который используется как исходный, и поля из объекта класса Clock.
#include <QObject> //Заголовочный файл для реализации системы сигналов и слотов.
#include <QWidget>  //Заголовочный файл, содержащий описание класса QWidget.
#include <QTimer> //Заголовочный файл, содержащий описание класса QTimer, для создания таймера.
#include <QLCDNumber> //Заголовочный файл, содержащий описание класса QLCDNumber, для создания виджета.
#include <QTime>
///////////////////////////////////////////////////////////
//Класс ClockWidget.
class ClockWidget : public QLCDNumber
{
    Q_OBJECT
private:
    int flag; //Флаг для реализации "мигания" доветочия между часами и минутами виджета. Обеспечивает лучшую визуальную восприимчивость объекта.
public:
    ClockWidget(QWidget *parent = 0); //Конструктор.
private slots:
    void ShowTime();  //Закрытый слот, для отображения времени.
    void CurrentTime(); //Закрытый слот, для передачи текущего значения времени другому объекту.
signals:
    void SendCurrentTime(QString temp);  //Сигнал для, для передачи текущего значения времени другом объекту
};
///////////////////////////////////////////////////////////
#endif
