#include<iostream>
using namespace std;

int main () {
    int n, m, ans = 0;
    cin>>n>>m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int a, b;
            cin>>a>>b;
            if (a == 1 || b == 1) {
                ans++;
            }
        } 
    }
    cout<<ans;
    return 0;
}


//Codeforces Problem: Vitaly and Night
//Link: https://codeforces.com/problemset/problem/595/A
//Status: Accepted      Language: C++