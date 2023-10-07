#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

int main () {
    ll n;
    cin>>n;
    ll ans = (2 * 4 * 3 * pow (4, n - 3)) + ((n - 3) * 4 * 9 * pow (4, n - 4));
    cout<<ans<<nl;
    return 0;
}