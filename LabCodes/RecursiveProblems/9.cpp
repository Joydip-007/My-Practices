#include <iostream>
using namespace std;

void largestElement(int arr[], int n, int &max) {
    if (n <= 0) {
        return;
    }
    if (arr[n - 1] > max) {
        max = arr[n - 1];
    }
    largestElement(arr, n - 1, max);
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    largestElement(arr, n, max);
    cout << "Largest element is: " << max << endl;
    return 0;
}