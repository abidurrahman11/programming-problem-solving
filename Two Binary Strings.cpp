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
        string s1, s2;
        cin>>s1>>s2;
        if (s1 == s2) {
            cout<<"YES\n";
            continue;
        }
        int n = s1.length ();
        string ans = "NO";
        for (int i = 0; i < n - 1; i++) {
            if (s1[i] == '0' && s2[i] == '0' && s1[i + 1] == '1' && s2[i + 1] == '1') {
                ans = "YES";
                break;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}