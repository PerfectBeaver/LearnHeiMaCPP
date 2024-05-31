#include <iostream>

using namespace std;

class Person
{
public:
    void showPerson() const // 导致指针不可以修改指针的指向的值，修饰的是this 指针
    {
        // this->m_A = 100;
        this->m_B = 100;
    }

    void func()
    {
    }

    int m_A;
    mutable int m_B; // 加了mutable关键字常函数中可以更改这个值 其他常函数是不可以修改未加mutable的值
};

void test01()
{
    Person p;
    p.showPerson();
}

/*
void test02() {
    const Person p; //在对象前加const 变为常对象
    p.m_A = 100;
    p.m_B = 100;

    //常对象只能调常函数
    p.showPerson();
    p.func(); //不能调用普通函数
}
*/

int main()
{
    test01();
}