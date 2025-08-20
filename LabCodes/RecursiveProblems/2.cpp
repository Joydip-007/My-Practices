#include <iostream>
using namespace std;

int SumofNumbers(int n){
    if (n == 0) {
        return 0;
    }
    return n + SumofNumbers(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << "Sum of numbers from 1 to " << n << " is " << SumofNumbers(n) << endl;
    return 0;
}