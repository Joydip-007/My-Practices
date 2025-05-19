#include <iostream>
using namespace std;

int main(){
    int x = 5, y = 10;
    int *ptr1 = &x, *ptr2 = &y;
    ptr2 =  ptr1;

    cout << "Value of x: " << *ptr1 << endl;
    cout << "Value of y: " << *ptr2 << endl;
    cout << x << endl;
}