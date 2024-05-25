#include <iostream>
#include <string>

using namespace std;

class Building;
class GoodGay
{
public:
    GoodGay();

    void visit(); //让visit函数可以访问building中私有的成员
    void visit2(); //让这个函数不可以访问building中的成员

    Building * building;
};

class Building
{
friend void GoodGay::visit(); //告诉编译器是goodgay类下的成员函数作为本类的好朋友可以访问私有成员

public:
    Building();

public:
    string m_SittingRoom;

private:
    string m_BedRoom;
};

//类外实现成员函数
Building::Building()
{
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
    building = new Building;
}

void GoodGay::visit()
{
    cout<< "visit函数正在访问：" << building->m_SittingRoom << endl;
    cout<< "visit函数正在访问：" << building->m_BedRoom << endl;
}

void GoodGay::visit2()
{
    cout<< "visit2函数正在访问：" << building->m_SittingRoom << endl;
    //cout<< "visit2函数正在访问：" << building->m_BedRoom << endl; //不可访问
}

void test01(){
    GoodGay gg;
    gg.visit();
    gg.visit2();
}

int main() {
    test01();
    return 0;
}
