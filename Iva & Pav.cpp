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

int arr[200000], pref[200000][30];

void prefSum (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 30; j++) {
            if (arr[i] & (1 << j)) {
                pref[i + 1][j] = pref[i][j] + 1;
            } else {
                pref[i + 1][j] = pref[i][j];
            }
        }
    }
}

int main () {
    FASTIO
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        prefSum (n);
        int q;
        cin>>q;
        for (int j = 0; j < q; j++) {
            int l, k;
            cin>>l>>k;
            int le = l, ri = n, ans = -1;
            while (le <= ri) {
                int mid = (le + ri) / 2;
                int found = 0;
                for (int i = 0; i < 30; i++) {
                    if (pref[mid][i] - pref[l - 1][i] == mid - l + 1) {
                        found += (1 << i);
                    }
                }
                if (found >= k) {
                    ans = mid;
                    le = mid + 1;
                } else {
                    ri = mid - 1;
                }
            }
            cout<<ans<<ws;
        }
        cout<<nl;
    }
    return 0;
}