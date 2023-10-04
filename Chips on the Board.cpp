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
        int n;
        cin>>n;
        ll arr[n], arr2[n];
        ll mna = 1e15, mnb = 1e15;
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
            mna = min (arr[i], mna);
        }
        for (int i = 0; i < n; i++) {
            cin>>arr2[i];
            mnb = min (arr2[i], mnb);
        }
        ll suma = 0, sumb = 0;
        for (int i = 0; i < n; i++) {
            suma += arr[i] + mnb;
            sumb += arr2[i] + mna;
        }
        cout<<min (suma, sumb)<<nl;
    }
    return 0;
}