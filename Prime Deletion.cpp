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

vector <int> prime (201, 1);

void sieve () {
    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i * i <= 200; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= 200; j += i) {
                prime[j] = 0;
            }
        }
    }
}

int main () {
    sieve ();
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        int ans = -1;
        bool found = false;
        for (int i = 0; i < 8; i++) {
            if (found) {
                break;
            }
            for (int j = i + 1; j < 9; j++) {
                string tm;
                tm += s[i];
                tm += s[j];
                int num = stoi (tm);
                if (prime[num]) {
                    ans = num;
                    found = true;
                    break;
                }
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}