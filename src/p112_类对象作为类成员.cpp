#include <iostream>
#include <string>

using namespace std;

class Phone{
public:
    Phone(string pName) {
        m_PName = pName;
    }

    string m_PName;
};

class Person {
public:
    Person(string name, string pName): m_Name(name), m_Phone(pName) {

    }

    string m_Name;
    Phone m_Phone;

};

void test01() {
    Person p("张三", "苹果");

}

int main() {
    test01();
}
