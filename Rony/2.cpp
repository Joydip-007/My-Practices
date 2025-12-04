#include <iostream>
using namespace std;

struct searchResult{
    bool found;
    int count;
};
searchResult binarySearch(int arr[], int start, int end, int key){
    searchResult result;
    result.found = false;
    result.count = 0;
    
    if(start > end){
        return result;
    }
    
    int mid = start + (end - start) / 2;
    result.count = 1;
    
    if(key==arr[mid]){
        result.found = true;
        return result;
    }
    if(key>arr[mid]){
        searchResult subResult = binarySearch(arr, mid+1, end, key);
        result.count += subResult.count;
        result.found = subResult.found;
    }
    if(key<arr[mid]){
        searchResult subResult = binarySearch(arr, start, mid-1, key);
        result.count += subResult.count;
        result.found = subResult.found;
    }
    return result;
}
int main(){
    int arr[100], n, key;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cin>>key;
    searchResult result;
    result=binarySearch(arr, 0, n-1, key);
    if(result.found==1){
        cout<<"Found"<<endl;
    }
    else cout<<"Not found"<<endl;
    cout<<"Middle checks: "<< result.count<<endl;
    
    return 0;
}
