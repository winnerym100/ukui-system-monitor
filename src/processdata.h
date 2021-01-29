/*
 * Copyright (C) 2020 KylinSoft Co., Ltd.
 *
 * Authors:
 *  Kobe Lee    xiangli@ubuntukylin.com/kobe24_lixiang@126.com
 *
 * This program is free software; you can redistribute it and/or modify
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


#ifndef PROCESSDATA_H
#define PROCESSDATA_H

#include <QObject>
#include <QString>
#include <QMap>
#include <QSharedPointer>

class ProcData
{
public:
    pid_t pid;
    double cpu;
    long m_memory;
    long m_nice;
    QString m_flownet;
    QString m_diskio;
    long long int m_numFlowNet;
    long long int m_numDiskIo;
    QPixmap iconPixmap;
    QString processName;
    QString displayName;
//    QString commandLine;
    QString path;
    QString user;
    QString m_status;
    QString m_session;
    QString cpu_duration_time;
};


typedef QSharedPointer<ProcData>  ProcDataPtr;
typedef QList<ProcDataPtr>  ProcDataPtrList;

Q_DECLARE_METATYPE(ProcData)
Q_DECLARE_METATYPE(ProcDataPtr)
Q_DECLARE_METATYPE(ProcDataPtrList)


#endif // PROCESSDATA_H
