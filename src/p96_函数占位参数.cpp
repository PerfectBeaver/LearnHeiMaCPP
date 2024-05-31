#include <iostream>

using namespace std;

// 只填数据类型

// 返回值类型 函数名（数据类型）{}
// 占位参数有默认参数
void func(int a, int)
{
    cout << "this is a function" << endl;
}

int main()
{
    func(10, 10);
}
