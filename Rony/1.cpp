#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n) {

    for (int i = 0; i < (n-1)/2; ++i) {

        int min_idx = i;

        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; 
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}
int main(){
    int arr[100], n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}