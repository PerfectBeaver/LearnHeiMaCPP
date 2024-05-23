#include <iostream>

using namespace std;

// 23 类和对象-对象特性-构造函数和析构函数
// https://www.bilibili.com/video/BV1et411b73Z?p=106

class Person 
{
public:
    Person ()
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

int main()
{
    Person person;
    Person person2(3);
    Person person3(person);
};
