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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        // sort (arr, arr + n);
        int f = 0, ini = 1;
        for (int i = 0; ;i++) {
            if (f == n) {
                break;
            }
            if (arr[i] == ini) {
                ini += 2;
                f++;
            } else {
                f++;
                ini++;
            }
        }
        cout<<ini - 1<<nl;
    }
    return 0;
}