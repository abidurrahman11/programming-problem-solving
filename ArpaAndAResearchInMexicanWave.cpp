#include<iostream>
using namespace std;

int main () {
    long long n, k, t, i;
    cin>>n>>k>>t;
    long long standing = 0, standing2 = k;

    if (t <= k) {
        for (i = 1; i <= t; i++) {
            standing++;
        }
        cout<<standing;
        return 0;
    } else if (t >= k && t<=n) {
        cout<<k;
        return 0;
    } else {
        for (i = n+1; i <= t; i++) {
            standing2--;
        }
        cout<<standing2;
        return 0;
    }

    return 0;
}


//Codeforces Problem: Arpa and a research in Mexican wave
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/851/A