#include<iostream>
using namespace std;

class tops
{
    int m,n,o;
public:
    void getData(int a ,int b ,int c)
    {
        m=a;
        n=b;
        o=c;
    }
    void showData();
    void operator-()   //unary - overloaded
    {
        m=-m;
        n=-n;
        o=-o;
    }
};

void tops::showData()  //::scope operator class na andar nu access krva d bahr
{
    cout<<"\nM = "<<m;
    cout<<"\nN = "<<n;
    cout<<"\nO = "<<o;
}

int main()
{
    tops t1;
    t1.getData(10,-20,30);
    t1.showData();
    -t1;
    t1.showData();
    return 0;
}
