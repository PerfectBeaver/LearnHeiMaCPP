#include <iostream>

using namespace std;

void mySwap01(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void mySwap02(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void mySwap03(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10;
    int &b = a; //初始化b (之后不可以更改)

    int x = 10;
    int y = 20;
    mySwap01(x, y); //值传递，形参改变
    cout << "a =" << a << endl;
    cout << "b =" << b << endl;

    mySwap02(&x, &y); //地址传递，形参会修饰实参

    mySwap03(x, y); //引用传递，形参会修饰实参
}