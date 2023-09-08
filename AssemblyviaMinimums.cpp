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
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int sz = (n * (n - 1)) / 2;
        int arr[sz];
        for (int i = 0; i < sz; i++) {
            cin>>arr[i];
        }
        sort (arr, arr + sz);
        for (int i = 0; i < sz; i += n) {
            cout<<arr[i]<<ws;
            n--;
        }
        cout<<1000000000<<nl;
    }
    return 0;
}