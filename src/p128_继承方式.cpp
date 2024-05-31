#include <iostream>
using namespace std;

class Base1
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};

class Son1 : public Base1
{
public:
    void func()
    {
        m_A = 10; // 父类中的公共权限内容到子类中依旧是公共权限
        m_B = 10; // 父类中的保护权限内容到子类中依旧是保护权限
        // m_C = 10; //父类中的私有权限内容到子类访问不到
    }
};

void test01()
{
    Son1 s1;
    s1.m_A = 100;
    // s1.m_B = 100; //保护权限 类外访问不到
}

class Base2
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};

class Son2 : protected Base2
{
public:
    void func()
    {
        m_A = 100; // 父类中的公共权限内容到子类中是保护权限
        m_B = 100; // 父类中的保护权限内容到子类中依旧是保护权限
        // m_C = 100; //父类中的私有权限内容到子类访问不到
    }
};

void test02()
{
    Son2 s2;
    // s2.m_A = 1000; //在类外访问不到
    // s2.m_B = 1000; //在类外访问不到
}

class Base3
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};

class Son3 : private Base3
{
public:
    void func()
    {
        // m_A = 10; //父类中的公共权限内容到子类中变成私有
        // m_B = 10; //父类中的保护权限内容到子类中变成私有
        // m_C = 10; //父类中的私有权限内容到子类访问不到
    }
};

class GrandSon3 : public Son3
{
public:
    void func()
    {
        // m_A = 10; //依旧继承不到
        // m_B = 10; //依旧继承不到
        // m_C = 10; //依旧继承不到
    }
};

void test03()
{
    Son3 s3;
    // s3.m_A = 1000; //变为私有成员
    // s3.m_B = 1000; //变为私有成员
    // s3.m_C = 1000; //变为私有成员
}

int main()
{
    test01();
    return 0;
}
