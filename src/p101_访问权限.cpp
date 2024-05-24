#include<iostream>
#include <string>

using namespace std;

class Person 
{
public:
    string m_Name;

protected:
    string m_Car;

private:
    int m_Password;

public:
void func()
{
    m_Name = "张三";
    m_Car = "拖拉机";
    m_Password = 123456;
}

};

//protected and private 的内容cannot be accessed outside of the class
int main() {
    Person p1;
    p1.m_Name = "李四";
    //p1.m_Car (Inaccessible);
    //p1.m_Password (Inaccessible);
}
