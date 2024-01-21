#include <QDebug>
#include "dataobject.h"
#include <iostream>
#include <QEvent>
#include <gamelogic.h>

DataObject::DataObject(QObject *parent)
    : QObject(parent)
{
}

DataObject::DataObject(const QString &name, const QString &zrodlo, const bool &flipped, const QString &isWin, const QString &colFront, const QString &colBack, QObject *parent)
    : QObject(parent), m_name(name), m_zrodlo(zrodlo), m_flipped(flipped), m_isWin(isWin), m_colFront(colFront), m_colBack(colBack)
{
}

QString DataObject::name()
{
    return m_name;
}

void DataObject::setName(const QString &name)
{
    if (name != m_name)
    {
        m_name = name;
        emit nameChanged();
    }
}
// источник
QString DataObject::zrodlo()
{
    return m_zrodlo;
}
// установления источников
void DataObject::setZrodlo(const QString &zrodlo)
{
    if (zrodlo != m_zrodlo)
    {
        m_zrodlo = zrodlo;
        emit zrodloChanged();
    }
}
// перевод карт
bool DataObject::flipped()
{
    return m_flipped;
}
// установление переворот карт если карты совподают
void DataObject::setFlipped(const bool &flipped)
{
    if (flipped != m_flipped)
    {
        m_flipped = flipped;
        emit flippedChanged(m_flipped);
    }
}
// установление переворот карт если карты не совпадают
void DataObject::setFlippedToFalse(const bool &flipped)
{
    if (flipped == true)
    {
        m_flipped = false;
        emit flippedChanged(m_flipped);
    }
}
// Победа
QString DataObject::isWin()
{
    return m_isWin;
}
// определение ли все карты верны
void DataObject::setIsWin(const QString &isWin)
{
    if (isWin != m_isWin)
    {
        m_isWin = isWin;
        emit isWinChanged();
    }
}
// цвет фоно
QString DataObject::colFront()
{
    return m_colFront;
}
// установление цвета при переворота карт
void DataObject::setColFront(const QString &colFront)
{
    if (colFront != m_colFront)
    {
        m_colFront = colFront;
        emit colFrontChanged(m_colFront);
    }
}
// установлении темный отенок карт
QString DataObject::colBack()
{
    return m_colBack;
}
// меняние цвета карт если верно
void DataObject::setColBack(const QString &colBack)
{
    if (colBack != m_colBack)
    {
        m_colBack = colBack;
        emit colBackChanged(m_colBack);
    }
}
