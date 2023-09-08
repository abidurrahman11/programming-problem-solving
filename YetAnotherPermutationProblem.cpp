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
        int n;
        cin>>n;
        int arr[n + 1] = {0};
        for (int i = 1; i <= n; i++) {
            if (arr[i] == 1) {
                continue;
            } else {
                for (int j = i; j <= n; j *= 2) {
                    arr[j] = 1;
                    cout<<j<<ws;
                }
            }
        }
        cout<<nl;
    }
    return 0;
}