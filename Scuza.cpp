// Codeforces Problem: Scuza
// Link: https://codeforces.com/problemset/problem/1742/E
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main () {
    int t;
    cin>>t;
    while (t--) {
        ll n, q, sum = 0, pos = 0;
        cin>>n>>q;
        vector <ll> v(n);
        vector <pair<ll, ll>> ques(q);
        vector <ll> ans(q);
        for (int i = 0; i < n; i++) {
            cin>>v[i];
        }
        for (int i = 0; i < q; i++) {
            cin>>ques[i].first;
            ques[i]. second = i;
        }
        sort(ques.begin(), ques.end());
        for (int i = 0; i < q; i++) {
            while (pos < n && v[pos] <= ques[i].first) {
                sum += v[pos];
                pos++;
            }
            ans[ques[i].second] = sum;
        }
        for (auto a : ans) {
            cout<<a<<" ";
        }
        cout<<"\n";
    }
    return 0;
}