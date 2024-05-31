#include <iostream>
using namespace std;

class Base
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};

class Son : public Base
{
    // 父类中所有非静态成员属性都会被子类继承下去
    // 父类的私有成员不能被子类access但是被继承了所以占内存
public:
    int m_D;
};

void test01()
{
    cout << "size of Son =" << sizeof(Son) << endl;
}

int main()
{
    test01();
    return 0;
}