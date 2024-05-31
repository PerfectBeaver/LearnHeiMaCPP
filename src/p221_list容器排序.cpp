#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

void printList(list<int> &L)
{
    for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    list<int> L1;
    L1.push_back(20);
    L1.push_back(10);
    L1.push_back(50);
    L1.push_back(40);
    L1.push_back(30);
    cout << "反转前：" << endl;
    printList(L1);

    L1.reverse();
    cout << "反转后：" << endl;
    printList(L1);
}

void test02()
{
    list<int> L1;
    L1.push_back(20);
    L1.push_back(10);
    L1.push_back(50);
    L1.push_back(40);
    L1.push_back(30);
    cout << "排序前：" << endl;
    printList(L1);

    // sort(L1.begin(), L1.end());
    L1.sort();
    cout << "排序后：" << endl;
    printList(L1);
}

int main()
{
    test02();
}