#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    void setName(string name) {
        m_Name = name;
    }

    string getName() {
        return m_Name;
    }

    int getAge() {
        return m_Age;
    }

    void setAge(int age) {
        if (age < 0 || age > 150) {
            cout << "年龄输入有误" <<endl;
            return;
        }
        m_Age = age;
    }

    void setIdol(string idol) {
        m_Idol = idol;
    }

private:
    string m_Name; //可读可写
    int m_Age = 18; //只读 -> 0-150可以写
    string m_Idol; //只写
};

int main() {
    Person p;
    p.setName("张三"); //名字设置
}
