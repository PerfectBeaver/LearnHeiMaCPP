#include <iostream>
using namespace std;
#include <vector>

void myPrint(int val)
{
    cout << val << endl;
}

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    vector<int>::iterator itBegin = v.begin();
    vector<int>::iterator itEnd = v.end();

    while (itBegin != itEnd)
    {
        cout << *itBegin << endl;
        itBegin++;
    }

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    for_each(v.begin(), v.end(), myPrint);
}

int main()
{
    test01();
}
