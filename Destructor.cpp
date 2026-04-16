#include<iostream>
using namespace std;
class box
{
public:
    box()
    {
        cout<<"\nConstructor Called";
    }
    ~box()
    {
        cout<<"\nDestructor Called";
    }
};
int main()
{
    box b1,b2,b3;
    {
        box b4;
    }
    {
        box b5;
    }
    box b6;
    return 0;
}
