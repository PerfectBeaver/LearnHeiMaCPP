#include <iostream>

using namespace std;

int *func()
{
    int *p = new int(10);
    return p;
}

void test01()
{
    int *p = func();
    cout << *p << endl;
    // 堆区的数据由程序员管理开辟
    delete p;
}

void test02()
{
    int *arr = new int[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    delete[] arr; // 释放数组的语法
}

int main()
{
    test01();
    test01();
}
