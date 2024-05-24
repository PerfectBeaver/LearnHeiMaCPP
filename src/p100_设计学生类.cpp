#include<iostream>
#include <string>

using namespace std;

class Student
{
public:
string m_Name;
int m_ID;

void showStudent()
{
    cout << "姓名 " << m_Name << "学号：" << m_ID << endl;
}

void setName(string name) {
    m_Name = name;
}

void setID(int num) {
    m_ID = num;
}

};

int main() {
    Student s1;
    s1.setName("张三");
    s1.m_ID = 1;
    s1.showStudent();

    Student s2;
    s2.m_Name = "张三";
    s2.m_ID = 2;
    s2.showStudent();
}
