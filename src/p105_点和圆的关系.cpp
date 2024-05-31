#include <iostream>

using namespace std;

class Point
{
public:
    void setX(int x)
    {
        m_X = x;
    }

    int getX()
    {
        return m_X;
    }

    void setY(int y)
    {
        m_Y = y;
    }

    int getY()
    {
        return m_Y;
    }

private:
    int m_X;
    int m_Y;
};

class Circle
{
public:
    void setR(int r)
    {
        m_R = r;
    }

    int getR()
    {
        return m_R;
    }

    void setCenter(Point center)
    {
        m_Center = center;
    }

    Point getCenter()
    {
        return m_Center;
    }

private:
    int m_R;
    Point m_Center;
};

void isInCircle(Circle &c, Point &p)
{
    int distance =
        (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
        (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

    int rDistance = c.getR() * c.getR();

    if (distance == rDistance)
    {
        cout << "the point is on the circle" << endl;
    }
    else if (distance > rDistance)
    {
        cout << "the point is outside of the circle" << endl;
    }
    else
    {
        cout << "the point is in the circle" << endl;
    }
}

int main()
{
}
