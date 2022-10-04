#include<iostream>
using namespace std;

void ans() {
    long long n, k, skipps;
    cin>>n>>k;
    skipps = (k - 1) / (n - 1);
    cout<<k + skipps<<"\n";
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        ans();
    }
    return 0;
}


//Codeforces Problem: K-th Not Divisible by n
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/1352/C