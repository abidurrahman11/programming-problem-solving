// Codeforces Problem: 1753B - Factorial Divisibility
// Link: https://codeforces.com/problemset/problem/1753/B
// Status: Accepted      Language: C++

#include<iostream>
//#include<bits/stdc++.h>
//#include<set>
//#include<map>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

ll arr[500001];

int main () {
    int n, x;
    cin>>n>>x;
    for (int i = 0; i < n; i++) {
        ll a;
        cin>>a;
        arr[a]++;
    }
    for (int i = 1; i < x; i++) {
        if (arr[i] % (i + 1) == 0) {
            arr[i + 1] += arr[i] / (i + 1);
        } else {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}