#include <iostream>
using namespace std;

int NumberOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + NumberOfDigits(n / 10);
}

int main() {
    int n;
    cin >> n;
    cout << "Number of digits in " << n << " is " << NumberOfDigits(n) << endl;
    return 0;
}