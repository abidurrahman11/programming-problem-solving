#include<bits/stdc++.h>
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
        bool pos = false;
        while (n >= 0) {
            if (n % 11 == 0) {
                pos = true;
                break;
            }
            n -= 111;
        }
        if (pos) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}