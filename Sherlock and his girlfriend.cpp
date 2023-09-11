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
    int n, col = 1;
    cin>>n;
    vector <int> prime (n + 2, 1);
    prime[0] = 0;
    prime[1] = 0;
    for (ll i = 2; i <= n + 1; i++) {
        if (prime[i] == 1) {
            for (ll j = i * i; j <= n + 1; j += i) {
                prime[j] = 2;
                col = 2;
            }
        }
    }
    cout<<col<<nl;
    for (int i = 2; i <= n + 1; i++) {
        cout<<prime[i]<<ws;
    }
    return 0;
}