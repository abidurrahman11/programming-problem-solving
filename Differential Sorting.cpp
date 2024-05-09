#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

typedef vector<int> vi;
typedef vector<pair<ll, ll>> vii;

int main () {
    FASTIO
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vi v (n);
        for (int i = 0; i < n; i++) {
            cin>>v[i];
        }
        if (is_sorted (v.begin (), v.end ())) {
            cout<<0<<nl;
        } else if (v[n - 1] < 0 || v[n - 2] > v[n - 1]) {
            cout<<-1<<nl;
        } else {
            cout<<n - 2<<nl;
            for (int i = 0; i < n - 2; i++) {
                cout<<i + 1<<ws<<n - 1<<ws<<n<<nl;
            }
        }
    }
    return 0;
}