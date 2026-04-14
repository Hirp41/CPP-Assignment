//constructor overloading
#include<iostream>
using namespace std;

class Box
{
    double width,height,depth;
public:
    void volume()
    {
        cout<<"\nVolume is: "<<width*height*depth;
    }
    Box()
    {
        cout<<"\nDefault constructor is called";
        width=3;
        height=4;
        depth=5;
    }

    Box(double w, double h, double d)
    {
        cout<<"\nParameterized constructor is called";
        width=w;
        height=h;
        depth=d;
    }

    Box(Box &b)   //object passed as argument
    {
        cout<<"\nCopy constructor is called";
        width=b.width;
        height=b.height;
        depth=b.depth;
    }

};

int main()
{
    Box b1;
    b1.volume();
    Box b2(6,4,5);
    b2.volume();
    Box b3(b1);
    b3.volume();
    Box b4(b2);
    b4.volume();
    return 0;
}
