#include<iostream>
// #include<bits/stdc++.h>
// #include<set>
// #include<vector>
// #include<map>
// #include<algorithm>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

int main () {
    int t;
    cin>>t;
    while (t--) {
        int a, b, c;
        cin>>a>>b>>c;
        int hf = c / 2;
        if (a + (c - hf) > b + hf) {
            cout<<"First\n";
        } else {
            cout<<"Second\n";
        }
    }
    return 0;
}