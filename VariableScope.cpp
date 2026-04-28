#include <iostream>
using namespace std;

int x = 10;

void showLocal() {
    int x = 20;  
    cout << "Inside showLocal() function, local x = " << x << endl;
}

void showGlobal() {
    cout << "Inside showGlobal() function, global x = " << x << endl;
}

int main() {
    cout << "Inside main(), global x = " << x << endl;

    showLocal();
    showGlobal();

    return 0;
}