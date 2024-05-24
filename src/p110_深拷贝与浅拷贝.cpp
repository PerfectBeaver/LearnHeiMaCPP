#include <iostream>

using namespace std;

class Person 
{
public:
    Person() {
        cout << "Person的默认构造函数调用" << endl;
    }

    Person (int age, int height) {
        m_Age = age;
        m_Height = new int(height);
        cout << "Person的有参构造函数调用" << endl;
    }

    Person(const Person &p) { 
        cout << "Person的拷贝构造函数调用" <<endl;
        m_Age = p.m_Age;
        m_Height = new int(*p.m_Height); //深拷贝的工作来防止浅拷贝带来的问题
    }

    ~Person() { //因为在test函数销毁前会调用析构函数，所以要在这里释放堆区数据
        if(m_Height != NULL) {
            delete m_Height;
            m_Height = NULL;
        }
        cout << "Person的析构函数调用" << endl;
    }

    int m_Age;
    int *m_Height;
};

void test01() {
    Person p1(18, 160);
    cout << "p1的年龄为：" << p1.m_Age << "身高为：" << p1.m_Height << endl;
    Person p2(p1);
    cout << "p2的年龄为：" << p2.m_Age << "身高为：" << p2.m_Height << endl;
}
 int main(){
    test01();
 }