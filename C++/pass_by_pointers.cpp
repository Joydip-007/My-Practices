#include <iostream>
using namespace std;

void change(int &param){
    param = 20;
    cout << param   << endl;
}

// void change(int *ptr){
//     *ptr = 20;
//     cout << *ptr << endl;
// }
int main(){
    int a = 10;
    cout << a << endl;
    change(a);

    cout << a << endl;

    return 0;
}