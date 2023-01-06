// Codeforces Problem: 127A - Wasted Time
// Link: https://codeforces.com/problemset/problem/127/A
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;

int main () {
    int n, k, x1, y1;
    double dist = 0;
    cin>>n>>k>>x1>>y1;
    int l1 = x1, l2 = y1;
    n--;
    while (n--) {
        int x2, y2;
        cin>>x2>>y2;
        dist += sqrt((l1 - x2) * (l1 - x2) + (l2 - y2) * (l2 - y2));
        l1 = x2, l2 = y2;
    }
    double ans = (dist / 50) * k;
    cout<<fixed<<setprecision(9)<<ans<<"\n";
    return 0;
}