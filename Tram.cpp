#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b;
    int ans = 0, count = 0;
    cin>>n;
    while (n--) {
        cin>>a>>b;
        count -= a;
        count += b;
        ans = max(ans, count);
    }
    cout<<ans;
    return 0;
}


//Codeforces Problem: Tram
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/116/A