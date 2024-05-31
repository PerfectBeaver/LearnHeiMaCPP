#include <iostream>

using namespace std;

class Person
{
    friend ostream &operator<<(ostream &cout, Person p);

public:
    Person(int a, int b)
    {
        m_A = a;
        m_B = b;
    }

private:
    int m_A;
    int m_B;
};
// 只能利用全局函数重载左移运算符
ostream &operator<<(ostream &cout, Person p)
{
    cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
    return cout;
}

void test01()
{
    Person p(10, 10);
    cout << p;
}

int main()
{
    test01();
    return 0;
}
