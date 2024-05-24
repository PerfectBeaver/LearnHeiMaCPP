#include<iostream>

using namespace std;

int func(int a, int b = 20, int c = 30) { //给b和c写了默认值
    return a+b+c;
}
/* 错误案例
int func02(int a = 10, int b, int c) { 
    return a+b+c;
}
*/

//如果声明有默认参数，函数实现就不能有默认参数 -> 导致重复定义
//声明和实现只能有一个有默认参数

int main() {
    //以下都可以调用因为函数设置了默认值
    func(1, 2, 3);
    func(1, 2);
    func(1);
    
}
