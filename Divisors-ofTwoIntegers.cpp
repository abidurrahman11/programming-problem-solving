// Codeforces Problem: B - Divisors of Two Integers
// Link: https://codeforces.com/contest/1108/problem/B
// Status: Accepted      Language: C++

#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
// #include<vector>
// #include<map>
#include<algorithm>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

int main () {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort (arr, arr + n);
    int n1 = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (n1 % arr[i] != 0 || arr[i] == arr[i + 1]) {
            cout<<arr[i]<<ws;
            break;
        }
    }
    cout<<n1<<nl;
    return 0;
}