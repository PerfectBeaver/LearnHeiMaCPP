#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    static int m_A; //所有对象都共享一份数据，类内声明，类外初始化

private:
    static int m_B; //inaccessible 类外不可以访问
};

int Person::m_A = 100;
int Person::m_b = 200;

void test01() {
    Person p;
    cout << p.m_A << endl;

    Person p2;
    p2.m_A = 200;
    cout << p.m_A << endl;
}

void test02() {
Person p;
cout << p.m_A << endl;
cout << Person::m_A << endl;
}

int main() {
    test01();
    test02();
}
