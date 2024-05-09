#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

typedef vector<ll> vi;
typedef vector<pair<ll, ll>> vii;

int main () {
    FASTIO
    int t;
    cin>>t;
    while (t--) {
        int n, m;
        cin>>n>>m;
        string s[n];
        for (int i = 0; i < n; i++) {
            cin>>s[i];
        }
        bool r1 = true, rn = true, c1 = true, cn = true;
        // char r1c = 'x', rnc = 'x', c1c = 'x', cnc = 'x';
        for (int i = 0; i < m - 1; i++) {
            if (s[0][i] != s[0][i + 1]) {
                r1 = false;
                break;
            }
        }
        for (int i = 0; i < m - 1; i++) {
            if (s[n - 1][i] != s[n - 1][i + 1]) {
                rn = false;
                break;
            }
        }
        for (int i = 0; i < n - 1; i++) {
            if (s[i][0] != s[i + 1][0]) {
                c1 = false;
                break;
            }
        }
        for (int i = 0; i < n - 1; i++) {
            if (s[i][m - 1] != s[i + 1][m - 1]) {
                cn = false;
                break;
            }
        }
        if (r1 && rn && s[0][0] != s[n - 1][0]) {
            cout<<"NO\n";
        } else if (c1 && cn && s[0][0] != s[0][m - 1]) {
            cout<<"NO\n";
        } else {
            cout<<"YES\n";
        }
    }
    return 0;
}