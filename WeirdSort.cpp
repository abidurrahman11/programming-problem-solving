#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
// #include<vector>
// #include<map>
#include<algorithm>
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
        int n, m;
        cin>>n>>m;
        int arr[n], arr2[m], mark[n] = {0};
        for (int i = 0; i < n; i++) cin>>arr[i];
        for (int i = 0; i < m; i++) {
            cin>>arr2[i];
            mark[arr2[i] - 1] = 1;
        }
        for (int i = 0; i < n; i++) {
            if (mark[i] == 1) {
                int idx = i;
                while (mark[idx] == 1 && idx < n) {
                    idx++;
                }
                sort (arr + i, arr + idx + 1);
                i = idx;
            }
        }
        bool ok = true;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}