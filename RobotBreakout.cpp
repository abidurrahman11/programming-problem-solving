// Codeforces Problem: C - Robot Breakout
// Link: https://codeforces.com/contest/1196/problem/C
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int lx = 100000, rx = -100000, uy = -100000, dy = 100000;
        for (int i = 0; i < n; i++) {
            int x, y, f1, f2, f3, f4;
            cin>>x>>y>>f1>>f2>>f3>>f4;
            if (f1 == 0) {
                rx = max (rx, x);
            }
            if (f2 == 0) {
                dy = min (dy, y);
            }
            if (f3 == 0) {
                lx = min (lx, x);
            }
            if (f4 == 0) {
                uy = max (uy, y);
            }
        }
        if (lx >= rx && dy >= uy) {
            cout<<1<<" "<<lx<<" "<<dy<<"\n";
        } else {
            cout<<0<<"\n";
        }
    }
    return 0;
}