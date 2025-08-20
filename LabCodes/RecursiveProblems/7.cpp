#include <iostream>
using namespace std;

int apowerb(int a, int b){
    if(b==0){
        return 1;
    }
    return a * apowerb(a, b - 1);
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << apowerb(a, b) << endl;
    return 0;
}