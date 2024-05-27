#include<iostream>
using namespace std;

class MyInteger
{
friend ostream& operator<<(ostream& cout, MyInteger myint);

public:
    MyInteger () {
        m_Num = 0;
    }

private:
    int m_Num;
};

//前置递增
MyInteger& operator++()
{
    m_Num++;
    return *this;
}

//后置递增
MyInteger operator++(int) //占位参数，用于区分前置和后置递增
{
    MyInteger temp = *this;
    m_Num++;
    return temp;
}

ostream& operator<<(ostream& cout, MyInteger myint) 
{
    cout << myint.m_Num;
    return cout;
}

void test01() {
    MyInteger myint;
    cout << ++myint << endl;
}

void test02() {
    MyInteger myint;
    cout << myint++ << endl;
    cout<< myint << endl;
}

int main() {
    test01();
    return 0;
}
