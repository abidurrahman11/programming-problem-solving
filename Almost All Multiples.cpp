#include<iostream>
#include<numeric>
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
    FASTIO
    int t;
    cin>>t;
    while (t--) {
        int n, x;
        cin>>n>>x;
        if (n % x) {
            cout<<-1<<nl;
        } else {
            int arr[n + 1];
            iota (arr, arr + n + 1, 0);
            arr[1] = x;
            arr[n] = 1;
            while (x < n) {
                for (int i = 2 * x; i <= n; i += x) {
                    if (n % i == 0) {
                        arr[x] = i;
                        x = i;
                        break;
                    }
                }
            }
            for (int i = 1; i <= n; i++) {
                cout<<arr[i]<<ws;
            }
            cout<<nl;
        }
    }
    return 0;
}