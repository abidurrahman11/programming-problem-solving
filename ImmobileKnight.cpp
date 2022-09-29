#include<iostream>
using namespace std;
void solve () {
    int n, m;
    cin>>n>>m;
    if (n > 3 || m > 3) {
        cout<<"1 1"<<"\n";
    } else if (n == 1 || m == 1) {
        cout<<"1 1"<<"\n";
    } else {
        cout<<n-1<<" "<<m-1<<"\n";
    }
}
int main () {
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}


//Codeforces Problem: Immobile Knight
//Status: Accepted
//Link: https://codeforces.com/contest/1739/problem/A