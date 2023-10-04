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
        int a, b, n;
        cin>>a>>b>>n;
        ll sum = b, x;
        for (int i = 0; i < n; i++) {
            cin>>x;
            if (x < a) {
                sum += x;
            } else {
                sum += (a - 1);
            }
        }
        cout<<sum<<nl;
    }
    return 0;
}