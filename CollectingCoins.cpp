#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, n, i;
    cin>>t;
    while (t--)
    {
        vector<int> v(3);
        for (i = 0; i < 3; i++) {
        cin>>v[i];
        }
        cin>>n;

        sort(v.rbegin(), v.rend());

        int dif1 = v[0] - v[1];
        int dif2 = v[0] - v[2];
        int rem = n - (dif1 + dif2);

        if (rem >= 0 && rem%3 == 0) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }     
    }
    
    return 0;
}

//Codeforces problem solution: Collectiing Coins
//Status Accepted
//Link: https://codeforces.com/problemset/problem/1294/A