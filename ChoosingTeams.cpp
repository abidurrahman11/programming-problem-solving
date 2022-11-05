// Codeforces Problem: Choosing Teams
// Link: https://codeforces.com/problemset/problem/432/A
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    vector <int> v;
    cin>>n>>k;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        if (5 - x >= k) {
            v.push_back(x);
        }
    }
    cout<<v.size() / 3;
    return 0;
}