#include <iostream>

using namespace std;

// 23 类和对象-对象特性-构造函数和析构函数
// https://www.bilibili.com/video/BV1et411b73Z?p=106

// 没创建一个类，c++编译器会给每个类都添加至少3个函数：
// 默认构造
// 析构函数
// 拷贝构造

class Person
{
public:
    Person()
    {
        cout << "person默认构造函数调用" << endl;
    }

    Person(int age)
    {
        cout << "person有参构造函数调用" << endl;
        m_Age = age;
    }

    Person(const Person &p)
    {
        cout << "person拷贝构造函数调用" << endl;
        m_Age = p.m_Age;
    }

    ~Person()
    {
        cout << "Person析构函数调用" << endl;
    }

    int m_Age;
};

void test01()
{
    Person p1(20);
    Person p2(p1);
    cout << "P2年龄为：" << p2.m_Age << endl;
}

void doWork(Person p)
{
}

void test02()
{
    Person p;
    doWork(p);
}

Person doWork02()
{
    Person p1;
    cout << (int *)&p1 << endl;
    return p1;
}

void test03()
{
    Person p = doWork02();
}

int main()
{
    Person person;
    Person person2(3);
    Person person3(person);

    test03();
};
