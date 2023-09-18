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
    int n, m;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cin>>m;
    int arr2[m];
    for (int i = 0; i < m; i++) {
        cin>>arr2[i];
    }
    sort (arr, arr + n);
    sort (arr2, arr2 + m);
    int p1 = 0, p2 = 0, ans = 0;
    while (p1 != n || p2 != m) {
        if (abs (arr[p1] - arr2[p2]) == 0 || abs (arr[p1] - arr2[p2]) == 1) {
            ans++;
            p1++, p2++;
        } else if (arr[p1] > arr2[p2]) {
            p2++;
        } else {
            p1++;
        }
    }
    cout<<ans;
    return 0;
}