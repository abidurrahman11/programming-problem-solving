// Codeforces Problem: 706A - Beru-taxi
// Link: https://codeforces.com/problemset/problem/706/A
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;

int main () {
    int a, b, n;
    double ans = 100001;
    cin>>a>>b>>n;
    while (n--) {
        int x, y, v;
        cin>>x>>y>>v;
        double diff = sqrt((a - x) * (a - x) + (b - y) * (b - y));
        double speed = diff / v;
        if (speed < ans) {
            ans = speed;
        }
    }
    cout<<fixed<<setprecision(20)<<ans;
    return 0;
}