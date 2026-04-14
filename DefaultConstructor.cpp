#include<iostream>
using namespace std;
class box
{
    double width,height,depth;
public:
    void volume()
    {
        cout<<"\nVolume is : "<<width*height*depth;
    }
    box()
    {
        cout<<"\nDefault constructor is called";
        width=3;
        height=4;
        depth=5;
    }
};

int main()
{
    box b1;
    b1.volume();
    return 0;
}