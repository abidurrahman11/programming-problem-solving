#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> v(n);
        for (int i = 0; i < n; i++) {
            cin>>v[i];
        }
        int ans = INT_MAX;
        sort(v.begin(), v.end());

        for (int i = 0; i < n-2; i++) {
            int d1 = abs(v[i] - v[i+1]);
            int d2 = abs(v[i+1] - v[i+2]);
            int x = d1 + d2;
            ans = min(ans, x);
        }

        cout<<ans<<"\n";
    }
    return 0;
}


//Codeforces Problem: Select Three Sticks
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/1734/A