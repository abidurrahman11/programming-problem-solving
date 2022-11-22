// Codeforces Problem: Holidays
// Link: https://codeforces.com/problemset/problem/670/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, maxi, mini;
    cin>>n;
    int wk = n / 7;
    mini = wk * 2 + max(0, (n % 7) - 5);
    int rem = min(2, (n % 7));
    cout<<mini<<" "<<wk * 2 + rem;
    return 0;
}