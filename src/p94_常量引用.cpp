#include <iostream>

using namespace std;

void showValue(const int &val)
{
    cout << "val = " << val << endl;
}

int main()
{
    // 加上const之后 编译器将代码修改 int temp = 10; int & ref = temp;
    const int &ref = 10;
    // ref = 20 ->加了cons不能修改

    int a = 100;
    showValue(a);
}