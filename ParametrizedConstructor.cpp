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
    Box(double w, double h, double d)
    {
        cout<<"\nParameterized constructor is called";
        width=w;
        height=h;
        depth=d;
    }
};

int main()
{
    Box b1(6,4,5);
    b1.volume();
    return 0;
}
