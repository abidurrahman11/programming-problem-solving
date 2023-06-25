// Codeforces Problem: C - Array Destruction
// Link: https://codeforces.com/contest/1474/problem/C
// Status: Accepted      Language: C++

#include<iostream>
// #include<bits/stdc++.h>
#include<set>
#include<vector>
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
        int n;
        cin>>n;
        int arr[2 * n];
        multiset <int, greater<int>> st;
        for (int i = 0; i < 2 * n; i++) {
            cin>>arr[i];
            st.insert (arr[i]);
        }
        sort (arr, arr + (2 * n));
        bool isEnd = false;
        for (int i = 0; i < 2 * n - 1; i++) {
            int x = arr[i] + arr[2 * n - 1];
            multiset <int, greater<int>> cSt;
            cSt = st;
            bool f = false;
            vector <pair<int, int>> ans;
            while (!cSt.empty ()) {
                int y = *cSt.begin ();
                cSt.erase (cSt.begin ());
                int z = x - y;
                if (cSt.find (z) != cSt.end ()) {
                    cSt.erase (cSt.find (z));
                    ans.push_back ({y, z});
                    x = max (y, z);
                } else {
                    f = true;
                    break;
                }
            }
            if (!f && cSt.empty ()) {
                cout<<"YES\n"<<arr[2 * n - 1] + arr[i]<<nl;
                for (auto p : ans) {
                    cout<<p.first<<ws<<p.second<<nl;
                }
                break;
            }
            if (i == 2 * n - 2) {
                isEnd = true;
            }
        }
        if (isEnd) {
            cout<<"NO\n";
        }
    }
    return 0;
}