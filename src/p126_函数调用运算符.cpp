#include <iostream>
#include <string>

using namespace std;

class MyPrint
{
public:
    void operator()(string test)
    {
        cout << test << endl;
    }
};

void test01()
{
    MyPrint myPrint;
    myPrint("hello world"); // 叫仿函数
}

class MyAdd
{
public:
    int operator()(int num1, int num2)
    {
        return num1 + num2;
    }
};

void test02()
{
    MyAdd myadd;
    int ret = myadd(100, 100);
    cout << "ret = " << ret << endl;
}

int main()
{
    test02();
}
