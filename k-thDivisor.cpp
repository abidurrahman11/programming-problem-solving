#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n, k, i;
    cin>>n>>k;
    vector<long long> v;
    set<long long> s;

    for (i = 1; i*i <= n; i++) {
        if (n%i == 0) {            
            s.insert(i);
            s.insert(n/i);
        }
    }

    v.assign(s.begin(), s.end());
    
    if (k > v.size()) {
        cout<<-1;
    } else {
        cout<<v[k-1];
    }
    
    return 0;
}

//Codeforces Problem: k-th divisor
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/762/A