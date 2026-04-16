#include<iostream>
using namespace std;

class A
{
    int a;
public:
    void getA()
    {
        cout<<"\nEnter A : ";
        cin>>a;
    }
    void putA()
    {
        cout<<"\nA : "<<a;
    }
};
class B:public A
{
    int b;
public:
    void getB()
    {
        cout<<"\nEnter B : ";
        cin>>b;
    }
    void putB()
    {
        cout<<"\nB : "<<b;
    }
};
class C:public A
{
    int c;
public:
    void getC()
    {
        cout<<"\nEnter C : ";
        cin>>c;
    }
    void putC()
    {
        cout<<"\nC : "<<c;
    }
};
class D:public B,public C
{
    int d;
public:
    void getD()
    {
        cout<<"\nEnter D : ";
        cin>>d;
    }
    void putD()
    {
        cout<<"\nD : "<<d;
    }
};
int main()
{
    C c1;
    B b1;
    D d1;
    b1.getA();   // for accessing a we have to make object of b or c we can't directly access by d
    d1.getB();
    d1.getC();
    d1.getD();
    b1.putA();
    d1.putB();
    d1.putC();
    d1.putD();
    return 0;
}
