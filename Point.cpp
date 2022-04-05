#include "Point.h"

Point::Point()
{
    _x = 0;
    _y = 0;
}

Point::Point(int x, int y)
{
    _x = x;
    _y = y;
}

Point::Point(const Point &p)
{
    _x = p._x;
    _y = p._y;
}

int Point::getX() const
{
    return _x;
}

void Point::setX(int x)
{
    _x = x;
}

int Point::getY() const
{
    return _y;
}

void Point::setY(int y)
{
    _y = y;
}

bool operator< (const Point &p1, const Point &p2)
{
    if(p1._x != p2._x)
        return p1._x < p2._x;
    else
        return p1._y < p2._y;
}