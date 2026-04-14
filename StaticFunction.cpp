#include <iostream>
using namespace std;
class StaticFunction
{
    static int a;
public:
    static void math(int x)
    {
        cout<<"\nA: "<<a;
        cout<<"\nX: "<<x;

    }
};
int StaticFunction::a=10;
int  main()
{
    StaticFunction::math(12);
    return 0;
}