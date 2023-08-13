// Codeforces Problem: 1530C - Pursuit
// Link: https://codeforces.com/problemset/problem/1530/C
// Status: Accepted      Language: C++

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
        int n, sum1 = 0, sum2 = 0;
        cin>>n;
        int arr[n], arr2[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++) {
            cin>>arr2[i];
        }
        sort (arr, arr + n);
        sort (arr2, arr2 + n);
        int cur = n / 4;
        for (int i = cur; i < n; i++) {
            sum1 += arr[i];
            sum2 += arr2[i];
        }
        int cpN = n, ans = 0, cur2 = cur - 1;
        while (sum1 < sum2) {
            sum1 += 100;
            ans++;
            n++;
            if (n % 4 == 0) {
                if (cur >= cpN) {
                    sum1 -= 100;
                } else {
                    sum1 -= arr[cur];
                    cur++;
                }
            }
            if (n % 4 != 0 && cur2 >= 0) {
                sum2 += arr2[cur2];
                cur2--;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}