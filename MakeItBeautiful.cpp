// Codeforces Problem: 1783A - Make it Beautiful
// Link: https://codeforces.com/problemset/problem/1783/A
// Status: Accepted      Language: C++

#include<iostream>
#include<algorithm>

using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        if (arr[0] == arr[n - 1]) {
            cout<<"NO\n";
        } else {
            cout<<"YES\n";
            int l = 0, r = n - 1;
            for (int i = 0, j = n - 1; i <= j;i++, j--) {
                if (i == j) {
                    cout<<arr[i];
                    break;
                } else {
                    cout<<arr[i]<<" "<<arr[j]<<" ";
                }
            }
            cout<<"\n";
        }
    }
}