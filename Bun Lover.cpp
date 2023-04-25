// Codeforces Problem: Bun Lover
// Link: https://codeforces.com/contest/1822/problem/C
// Status: Accepted      Language: C++

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long n;
        cin >> n;
        unsigned long long ans = (n * n) + (n * 2) + 2;
        cout<<ans<<"\n";
    }
    return 0;
}
