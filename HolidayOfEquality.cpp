//Codeforces Problem: Holiday Of Equality
//Link: https://codeforces.com/problemset/problem/758/A
//Status: Accepted      Language: C++


#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr + n, greater<int>());
    int ans = 0;
    for (int i = 1; i < n; i++) {
        int a = arr[0] - arr[i];
        ans += a;
    }
    cout<<ans;
    return 0;
}