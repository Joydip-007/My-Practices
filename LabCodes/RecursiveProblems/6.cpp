#include <iostream>
using namespace std;

int nthFibonacci(int n){
    if (n <= 1) {
        return n;
    }
    return nthFibonacci(n - 1) + nthFibonacci(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << "Fibonacci number at position " << n << " is " << nthFibonacci(n) << endl;
    return 0;
}