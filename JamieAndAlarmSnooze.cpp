// Codeforces Problem: 916A - Jamie and Alarm Snooze
// Link: https://codeforces.com/problemset/problem/916/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, h, m, cnt = 0;
    cin>>x>>h>>m;
    while (h % 10 != 7 && m % 10 != 7) {
        m -= x;
        cnt++;
        if (m < 0) {
            h--;
            m += 60;
        }
        if (h < 0) {
            h += 24;
        }
    }
    cout<<cnt;
    return 0;
}