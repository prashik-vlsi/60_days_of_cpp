#include <iostream>
using namespace std;

int main() {
    int x = 69;
    double y = 70.0;

    int *p = &x;
    *p = 100;
cout << "Value of x after *p = 100: " << x << endl;

    cout<<"the value of variable is:"<<*p<<endl;
    cout<<"the adress of variable is:"<<p<<endl;

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;

    cout << "Value of y: " << y << endl;
    cout << "Address of y: " << &y << endl;


    return 0;
}