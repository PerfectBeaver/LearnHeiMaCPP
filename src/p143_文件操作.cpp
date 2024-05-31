#include <iostream>
#include <fstream>

using namespace std;

void test01()
{
    ofstream ofs;
    ofs.open("test.txt", ios::out);
    ofs << "姓名：张三" << endl;
    ofs << "性别：男" << endl;
    ofs << "年龄：18" << endl;
    ofs.close();
}

void test02()
{
    ifstream ifs;
    ifs.open("test.txt", ios::in);
    if (!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
        return;
    }
    char buf[1024] = {0};
    while (ifs >> buf)
    {
        cout << buf << endl;
    }
    ifs.close();
}

int main()
{
    test02();
}
