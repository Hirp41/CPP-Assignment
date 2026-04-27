/*Assignment*/
#include<iostream>
using namespace std;
int main()
{
    string name;
    int age;
    cout<<"Hello World";
    cout<<"\nYour name: ";
    cin>>name ;
    cout<<"\nYour age: ";
    cin>> age;

    cout<<"\nHello "<<name<<"\nYour age is "<<age<<" nice to meet you";
}

#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, width;
public:
    void getData() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }
    float calculateArea() {
        return length * width;
    }
};
int main() {
    Rectangle r;   // Object of class
    r.getData();   // Input values
    cout << "Area of Rectangle = " << r.calculateArea() << endl;
    return 0;
}