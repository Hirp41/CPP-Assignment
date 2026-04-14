#include<iostream>
using namespace std;
class clock
{
    int hrs;
    int mints;
public:
    void insert_time(int h, int m)
    {
        hrs=h;
        mints=m;
    }
    void display_time(void)
    {
        cout<< hrs << " hours & ";
        cout<< mints << "minutes"<< "\n";
    }
    void sum (clock,clock);
};
void clock::sum(clock t1, clock t2)
{
    mints= t1.mints + t2.mints;
    hrs=mints/60;
    mints= mints%60;
    hrs = hrs+ t1.hrs +t2.hrs;
}
int main()
{
    clock C1,C2,C3;
    C1.insert_time(3,55);
    C2.insert_time(3,45);

    C3.sum(C1,C2);
    cout<< "Time1 = "; C1.display_time();
    cout<< "Time2 = "; C2.display_time();
    cout<< "Time3 = "; C3.display_time();

    return 0;
}
