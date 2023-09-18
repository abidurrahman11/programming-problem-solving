#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
// #include<vector>
// #include<map>
// #include<algorithm>
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
        int a;
        for (int i = 0; i < n; i++) {
            cin>>a;
        }
        if (n & 1) {
            cout<<4<<nl;
            cout<<1<<ws<<n - 1<<nl;
            cout<<1<<ws<<n - 1<<nl;
            cout<<n - 1<<ws<<n<<nl;
            cout<<n - 1<<ws<<n<<nl;
        } else {
            cout<<2<<nl;
            cout<<1<<ws<<n<<nl;
            cout<<1<<ws<<n<<nl;
        }
    }
    return 0;
}