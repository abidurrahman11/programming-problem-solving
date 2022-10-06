#include<iostream>
using namespace std;

void ans() {
    int n, k;
    cin>>n>>k;
    int even = n - (2 * (k - 1));
    int odd = n - (k - 1);
    if (even > 0 && even%2 == 0) {
        cout<<"YES\n";
        for (int i = 0; i < k - 1; i++) {
            cout<<2<<" ";
        }
        cout<<even<<"\n";
    } else if (odd > 0 && odd%2 == 1) {
        cout<<"YES\n";
        for (int i = 0; i < k - 1; i++) {
            cout<<1<<" ";
        }
        cout<<odd<<"\n";
    } else {
        cout<<"NO\n";
    }
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        ans();
    }
    return 0;
}


//Codeforces Problem: Same Parity Summands
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/1352/B