#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
#include<vector>
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
        string s;
        cin>>s;
        int n = s.length ();
        vector <int> v (n, -1);
        v[0] = 0;
        v[1] = 1;
        int cur = 0;
        string ans = "YES";
        for (int i = 0; i < n; i++) {
            if (s[i] == '+') {
                cur++;
            } else if (s[i] == '-') {
                cur--;
            } else if (s[i] == 1) {
                if (!v[cur]) {
                    ans = "NO";
                    break;
                }
            } else {
                if (v[cur] == -1) {
                    v[cur] = 0;
                } else if (s[i] != v[cur]) {
                    ans = "NO";
                    break;
                }
            }
        }
        cout<<ans;
    }
    return 0;
}