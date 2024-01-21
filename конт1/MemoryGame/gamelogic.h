#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include <QObject>
#include <dataobject.h>

class GameLogic : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int counter READ counter WRITE setCounter NOTIFY counterChanged) // это делает счетчик доступным как свойство qml
    Q_PROPERTY(int points READ points WRITE setPoints NOTIFY pointsChanged)     // это делает точку доступной как свойства qml

public:
    GameLogic();
    int counter() const;        // getter
    void setCounter(int value); // setter
    int points() const;         // getter
    void setPoints(int value);  // setter

private:
    int m_counter; // инициализировать частную переменную (со значением по умолчанию), которую можно изменить только при использовании метода получения
    int m_points;  // инициализировать частную переменную (со значением по умолчанию), которую можно изменить только при использовании метода получения

signals: // сигналы передаются из С++ в qml
    void counterChanged();
    void pointsChanged(QString xd);
    void win();

public slots: // слоты это общедоступные методы, доступные в qml
    void checkVisibility(QList<QObject *> model);
    void restart(QList<QObject *> model);
};

#endif // GAMELOGIC_H
