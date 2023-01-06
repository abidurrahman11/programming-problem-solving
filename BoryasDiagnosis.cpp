// Codeforces Problem: 879A - Borya's Diagnosis
// Link: https://codeforces.com/problemset/problem/879/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, s1, d1;
    cin>>n>>s1>>d1;
    int pDay = s1;
    n--;
    while (n--) {
        int s, d, nth = 1;
        cin>>s>>d;
        int curDay = s;
        while (curDay <= pDay) {
            curDay = s + (nth * d);
            nth++;
        }
        pDay = max(curDay, pDay);
    }
    cout<<pDay;
    return 0;
}