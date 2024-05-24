//struct 权限默认是公共
//class 默认权限是私有

class C1
{
    int m_A;

};

struct C2
{
    int m_A;
};

int main() {
    C1 c1;
    //c1.m_A (Inaccessible)

    C2 c2;
    c2.m_A = 100; //可以访问
}
