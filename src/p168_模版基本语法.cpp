#include <iostream>
using namespace std;

void swapInt(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

template <typename T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

void test01()
{
    int a = 10;
    int b = 20;

    //mySwap(a, b);
    mySwap<int>(a,b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main()
{
    test01();
}