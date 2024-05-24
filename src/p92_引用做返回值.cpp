#include <iostream>

using namespace std;

int& test01() {
    int a = 10;
    return a;
}

int& test02() {
    static int a = 10; //静态变量，存放在全局区，全局区上的数据在程序结束后系统释放
    return a;
}
int main() {
    int &ref = test01(); //非法操作
    int &ref2 = test02(); //函数的调用可以作为左值
    test02() = 1000; //如果函数的返回值是引用，这个函数可以作为左值 （等号的左边）
}

//引用的本质在c++内部是个指针常量
//指针的指向是固定的
//指针指向的值是可以改的
