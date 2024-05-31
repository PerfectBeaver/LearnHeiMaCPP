#include <iostream>

using namespace std;

class Cube
{
public:
    void setL(int l)
    {
        m_L = l;
    }

    int getL()
    {
        return m_L;
    }

    void setW(int w)
    {
        m_W = w;
    }

    int getW()
    {
        return m_W;
    }

    void setH(int h)
    {
        m_H = h;
    }

    int getH()
    {
        return m_H;
    }

    int calculateArea()
    {
        return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
    }

    int calculateVolume()
    {
        return m_H * m_L * m_W;
    }

    bool isSameByClass(Cube &c)
    {
        if (m_L == c.getL() && m_H == c.getH() && m_W == c.getW())
        {
            return true;
        }
        return false;
    }

private:
    int m_L; // 长
    int m_W; // 宽
    int m_H; // 高
};

bool isSame(Cube &c1, Cube &c2)
{
    if (c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getW() == c2.getW())
    {
        return true;
    }
    return false;
}

int main()
{
    Cube c1;
    c1.setL(10);
    c1.setW(10);
    c1.setH(10);

    cout << "c1的面积为：" << c1.calculateArea() << endl;
    cout << "c1的体积为：" << c1.calculateVolume() << endl;
}
