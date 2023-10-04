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
    int n, m;
    cin>>n>>m;
    int ans = 0;
    if (n >= m) {
        cout<<n - m<<nl;
        return 0;
    } else {
        while (n < m) {
            if (m % 2 == 0) {
                m /= 2;
                ans++;
            } else if (m % 2 == 1) {
                m++;
                ans++;
            }
        }
        if (n != m) {
            ans += n - m;
        }
    }
    cout<<ans<<nl;
    return 0;
}