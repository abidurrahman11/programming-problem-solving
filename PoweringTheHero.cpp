// Codeforces Problem: 1800C1 - Powering the Hero (easy version)
// Link: https://codeforces.com/problemset/problem/1800/C1
// Status: Accepted      Language: C++

#include<iostream>
#include<queue>
using namespace std;

#define ll long long

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int n;
        ll ans = 0;
        cin>>n;
        priority_queue <int> pq;
        for (int i = 0; i < n; i++) {
            int x;
            cin>>x;
            if (x == 0 && !pq.empty ()) {
                ans += pq.top ();
                pq.pop ();
            } else {
                pq.push (x);
            }
        }       
        cout<<ans<<"\n";
    }
    return 0;
}