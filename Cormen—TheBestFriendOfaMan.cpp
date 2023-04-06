#include<iostream>
using namespace std;

int main () {
    int n, k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int add = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] + arr[i + 1] < k) {
            int ext = k - (arr[i] + arr[i + 1]);
            arr[i + 1] += ext;
            add += ext;
        }
    }
    cout<<add<<"\n";
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}