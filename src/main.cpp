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

//main.cpp
///////////////////////////////////////////////////////////
#include <QApplication> //Заголовчный файл, содержащий описание класса QApplication.
#include "mainwindow.h"
///////////////////////////////////////////////////////////
//Тело программы.
int main(int argc, char *argv[])
{
  QApplication app(argc,argv); //Создаем объект QApplication для управления всеми ресурсами приложения.
  MainWindow window;  //Создаем объект MainWidget для реализации главного окна программы.

  window.show(); //Вызывем функцию show() для отображения главного окна.
  return app.exec();
}
///////////////////////////////////////////////////////////
