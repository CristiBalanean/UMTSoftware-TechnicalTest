#include <iostream>

class Point
{
    private:
        int _x;
        int _y;

    public:
        Point(); //default constructor
        Point(int x, int y); //parameterized constructor
        Point(const Point &p); //copy constructor

        friend bool operator< (const Point &p1, const Point &p2); //operator < override

        //getters and setters
        int getX() const;
        void setX(int x);

        int getY() const;
        void setY(int y);
};