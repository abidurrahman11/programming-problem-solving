#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string ans = "YES";
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n-1; i++) {
            if (v[i] == v[i+1]) {
                ans = "NO";
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}


//Codeforces Problem: Increasing
//Link: https://codeforces.com/problemset/problem/1742/B
//Status: Accepted      Language: C++