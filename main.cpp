/* This file is part of 3GPP Decoder project.
 * Copyright (C) 2015  Prashant Panigrahi prashant@3glteinfo.com
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
/*
my user_dlts:

"User 3 (DLT=150)","lte-rrc.bcch.bch","0","","0",""

"User 4 (DLT=151)","lte-rrc.bcch.dl.sch","0","","0",""

"User 5 (DLT=152)","lte-rrc.dl.ccch","0","","0",""

"User 6 (DLT=153)","lte-rrc.dl.dcch","0","","0",""

"User 7 (DLT=154)","lte-rrc.pcch","0","","0",""

"User 8 (DLT=155)","lte-rrc.ul.ccch","0","","0",""

"User 9 (DLT=156)","lte-rrc.ul.dcch","0","","0","" 
*/

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
