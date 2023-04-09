// Codeforces Problem: A - Li Hua and Maze
// Link: https://codeforces.com/contest/1797/problem/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, m, x1, y1, x2, y2;
        cin>>n>>m>>x1>>y1>>x2>>y2;
        if (x1 == 1 && y1 == 1 || x2 == 1 && y2 == 1 || x1 == n && y1 == m || x2 == n && y2 == m || x1 == n && y1 == 1 || x2 == n && y2 == 1 || x1 == 1 && y1 == m || x2 == 1 && y2 == m) {
            cout<<2<<"\n";
        } else if (x1 == 1 || y1 == 1 || x2 == 1 || y2 == 1 || x1 == n || x2 == n || y1 == m || y2 == m) {
            cout<<3<<"\n";
        } else {
            cout<<4<<"\n";
        }
    }
    return 0;
}