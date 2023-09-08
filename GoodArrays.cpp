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
        int n, a;
        ll allSum = 0, oneSum = 0;
        cin>>n;
        for (int i = 0; i < n; i++) {
            cin>>a;
            allSum += a;
            if (a == 1) {
                oneSum += a;
            }
        }
        if (n == 1) {
            cout<<"NO\n";
            continue;
        }
        allSum -= n;
        if (oneSum > allSum) {
            cout<<"NO\n";
        } else {
            cout<<"YES\n";
        }
    }
    return 0;
}