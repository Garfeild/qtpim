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

//dialog.h
///////////////////////////////////////////////////////////
#ifndef DIALOG_H
#define DIALOG_H
///////////////////////////////////////////////////////////
//Заголовочный файл, содержащий описание класса Dialog, который является
//дочерним класса QDialog. Необходим для отображения информации о сигнале
//будильника.
///////////////////////////////////////////////////////////
#include <QPushButton>
#include <QLabel>
#include <QDialog>
///////////////////////////////////////////////////////////
//Описание класса Dialog.
class Dialog : public QDialog
{
  Q_OBJECT
public:
    Dialog(QWidget *parent = 0);  //Конструктор класса Dialog.
public slots:
    void ShowDialog(QString alarmTime, QString alarmMessage); //Слот для отображения диалогового окна.
    void CloseDialog(); //Слот для закрытия диалогового окна.
signals:
    void Opened(); //Сигнал для начала проигрывания звукового сигнала.
    void Closed(); //Сигнал для остановки проигрывания звукого сигнала.
private:
    QLabel *message;  //Текстовая метка для отображения текста.
    QLabel *time; //Текстовая метка для отображения времяни сигнала.
    QPushButton *okButton;  //Кнопка OK.
};
///////////////////////////////////////////////////////////
#endif
