// #include<iostream>
#include<bits/stdc++.h>
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

bool prime (ll n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main () {
    FASTIO
    int n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        ll a;
        cin>>a;
        ll rt = sqrt (a);
        if (prime (rt) && rt * rt == a) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}