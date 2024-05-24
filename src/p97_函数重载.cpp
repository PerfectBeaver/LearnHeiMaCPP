#include<iostream>

using namespace std;

void func(int &a) {
    cout << "func(int &a)调用" << endl;
}

void func(const int &a) {
    cout << "func(const int &a)调用" << endl;
}

// ------------------------------------------
//函数重载碰到默认参数
void func02(int a, int b = 10) {
    cout << "func02(int a, int b = 10)调用" << endl;
}

void func02(int a) {
    cout << "func02(int a)调用" << endl;
}

int main() {
    int a = 10;
    func(a);
    //func02(10); //出现二意性，尽量避免
}