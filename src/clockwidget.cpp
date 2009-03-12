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

//clockwidget.cpp
///////////////////////////////////////////////////////////
#include "clockwidget.h"
///////////////////////////////////////////////////////////
//Методы и слоты класса ClockWidget
//---------------------------------------------------------
//Конструктор класса ClockWidget.
ClockWidget::ClockWidget(QWidget *parent)
    : QLCDNumber(parent)
{
  QTimer *timer = new QTimer(this); //Создаем таймер, который будет обновлять времня на часах.
//Соединяем сигнал таймера timer, сигнализирующий о том, что отсчет
//закончился, со слотом showTime() виджета ClockWidget.
  connect(timer, SIGNAL(timeout()), 
          this, SLOT(ShowTime()));
//Соединяем сигнал timeout() таймера timer со слотом SearchSlot для передачи
//текущего времени другом объекту для поиска.
  connect(timer, SIGNAL(timeout()), 
          this, SLOT(CurrentTime()));
  
  flag = 0; //Флаг, для реализации "мигания" двоеточия.
  timer->start(1000); //запускаем отсчет таймера одной секунды.
  
  setSegmentStyle(Flat); //Определяем внешний вид виджета.
  setFrameShape(QFrame::NoFrame);
  setMinimumSize(180, 70);  //Устанавливаем фиксированный размер виджета.
}
//---------------------------------------------------------
//Слот ShowTime() для отображения текущего времени.
void ClockWidget::ShowTime()
{
  QString temp = QTime::currentTime().toString("hh:mm");
  if (flag == 1) //Цикл, проверяющий чему равен флаг, который сигнализирует о том, что выводить для отображения - пустую строку между часами и минутами или двое точие.Внутри цикла переназначается флаг с 1 на 0 и наоборот, так чтобы каждый раз было разное значение. Таким образом достигается "мигание" двоеточия, создается эффект тиакющих часов. 
  { 
    display(temp);//clock.ClockValue());
    flag = 0;
  }
  else 
  { 
    temp[2]=' ';
    flag = 1;
    display(temp);  
  }
} 
//---------------------------------------------------------
//Слот CurrentTime() для передачи текущего времени другому объекту.
void ClockWidget::CurrentTime()
{
  emit SendCurrentTime(QTime::currentTime().toString("hh:mm")); //Генерируется сигнал, передающий текущее время другому объекту.
}
///////////////////////////////////////////////////////////
