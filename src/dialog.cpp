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

//dialog.cpp
///////////////////////////////////////////////////////////
#include <QtGui>  //Заголовочный файл, содержащий определения классов графической системы Qt.
#include "dialog.h"
///////////////////////////////////////////////////////////
//Методы и слоты класса Dialog.
//---------------------------------------------------------
//Конструктор класса Dialog
Dialog::Dialog(QWidget *parent)
  : QDialog(parent)
{
  message = new QLabel; //Задаем текст метки.
  time = new QLabel;  //Выделяем память под объект, который отображает время сигнала.
  okButton = new QPushButton("OK"); //Задаем текст кнопки.
   
  message->setFont(QFont("Sans", 14, QFont::Normal));  //Форматирование текстовой метки.  
  time->setFont(QFont("Sans", 18, QFont::Bold));  //Форматирование текста.
  okButton->setFixedSize(70,30); //Задаем размер кнопки.

//Соединение сигнала clicked() объекта okButton со слотом CloseDialog диалогового окна Dialog.
  connect(okButton, SIGNAL(clicked()),
          this, SLOT(CloseDialog()));
    
  QHBoxLayout *top = new QHBoxLayout; //Определяем верхний горизонтальный слой top.
  top->addStretch();  
  top->addWidget(time);  //Добавляем текстовую метку label
  top->addStretch();
  
  QHBoxLayout *middle = new QHBoxLayout;
  //middle->addSrtetch();
  middle->addWidget(message);
  //middle->addStretch();

  QHBoxLayout *bottom = new QHBoxLayout;  //Определяем нижний горизонтальный слой bottom.
  bottom->addStretch(); //Добавляем пустрое пространство слева от кнопки ОК.
  bottom->addWidget(okButton);  //Добавляем кнопку okButton.
  bottom->addStretch(); //Добавляем пустое пространство справа от кнопки OK.

  QVBoxLayout *main = new QVBoxLayout; //Определяем главный вертикальный слой main.
  main->addLayout(top); //Добавляем слой top
  main->addLayout(middle);
  main->addLayout(bottom);  //и bottom.
  setLayout(main);  //Устанавливаем слой виджета.

  setWindowTitle("Alarm!"); //Устанавливаем заголовок окна.
  setMinimumSize(40,100);
}
//---------------------------------------------------------
//Слот ShowDialog, реализующий отображение диалогового окна при сигнале
//будильника.
void Dialog::ShowDialog(QString alarmTime, QString alarmMessage)
{
  time->setText(alarmTime); //Задаем текст метки time, которая отображает текущее время сигнала.
  message->setText(alarmMessage);  
  if(alarmMessage == "")
    message->setVisible(false);
  show(); //Отображение диалогового окна.
  emit Opened(); //Генерируем сигнал Alarm() для начала проигрывания звукового сигнала.
}
//---------------------------------------------------------
//Слот CloseDialog, реализующий закрытие диалогового окна и генерацию сигнала
//о том, что звуковой сигнал должен пректатиться.
void Dialog::CloseDialog()
{
  close();  //Закрываем диалоговое окно.
  emit Closed(); //Генерируем сигнал StopAlarm() для остановки проигрывания звукового сигнала.
}
///////////////////////////////////////////////////////////
