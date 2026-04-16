#include<iostream>
using namespace std;

class A
{
public:
    virtual void show()=0;  //virtual function doesn't have body and are declared by assigning 0
};
class B:public A
{
public:
    void show()
    {
        cout<<"\nShow created in B class. Declared in A class";   //if inherited class we must create body of virtual function
    }
    void display()
    {
        cout<<"\nDisplay from B.";
    }
};

int main()
{
    B b1;   //object will be created of B and it will only execute after making the body of virtual function
    b1.show();
    b1.display();
}