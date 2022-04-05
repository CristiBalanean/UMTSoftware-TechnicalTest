#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include "Point.cpp"
using namespace std;

int n,x,y;

//Counts all rectangles that can be formed with given points using one of the rectangles properties: if you have 2 points
//you can easily determine the other two ( A(x1,y1),B(x2,y2) -> C(x1,y2),D(x2,y1) ). The final answer is divided by 4 because
//the program checks if it is a rectangle for every corner. In order for this approach to work the rectangles must be parallel to
//the Ox and Oy axis and x1 != x2, respectively y1 != y2.
int countRectangles(set<Point> p)
{
    int rectangleCount=0;
    Point auxPoint1,auxPoint2;
    set<Point>::iterator it1;
    set<Point>::iterator it2;

    for(it1=p.begin();it1!=p.end();it1++)
    {
        for(it2=p.begin();it2!=p.end();it2++)
        {
            if((it1->getX() != it2->getX()) && (it1->getY() != it2->getY()))
            {
                auxPoint1 = Point(it1->getX(), it2->getY());
                auxPoint2 = Point(it2->getX(), it1->getY());
                if(p.count(auxPoint1) && p.count(auxPoint2))
                {
                    rectangleCount++;
                }
            }
        }
    }

    return (rectangleCount/4);
}

int main()
{
    cout << "How many points do you want to read: "; cin >> n;
    set<Point> points;

    for(int i=0;i<n;i++)
    {
        cout << "Give x coordinate of point number " << i+1 << ": "; cin >> x;
        cout << "Give y coordinate of point number " << i+1 << ": "; cin >> y;
        Point *p = new Point(x,y);
        points.insert(*p);
    }

    cout << "Number of rectangle(s) is: " << countRectangles(points);

    return 0;
}