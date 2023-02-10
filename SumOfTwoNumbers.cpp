// Codeforces Problem: B - Sum of Two Numbers
// Link: https://codeforces.com/contest/1788/problem/B
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

#define ll long long

int main () {
    int t;
    cin>>t;
    while (t--) {
        ll n;
        cin>>n;
        int x = 0, y = 0, p = 1;
        while (n) {
            int t = n % 10;
            x += (t / 2) * p;
            y += (t - (t / 2)) * p;
            if (t % 2 == 1) {
                swap(x, y);
            }
            p *= 10;
            n /= 10;
        }
        cout<<x<<" "<<y<<"\n";
    }
    return 0;
}