// Codeforces Problem: C - Alternating Subsequence
// Link: https://codeforces.com/contest/1343/problem/C
// Status: Accepted      Language: C++

#include<iostream>
//#include<bits/stdc++.h>
//#include<set>
//#include<vector>
//#include<map>
//#include<algorithm>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        ll arr[n], curN = -1000000000001, ans = 0;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] > 0 && flag == true) {
                curN = max (curN, arr[i]);
            } else if (arr[i] > 0 && flag == false) {
                flag = true;
                ans += curN;
                curN = arr[i];
            } else if (arr[i] < 0 && flag == true) {
                flag = false;
                if (i > 0) {
                    ans += curN;
                }
                curN = arr[i];
            } else if (arr[i] < 0 && flag == false) {
                curN = max (curN, arr[i]);
            }
        }
        ans += curN;
        cout<<ans<<nl;
    }
    return 0;
}