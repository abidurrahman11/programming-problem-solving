#include<bits/stdc++.h>
using namespace std;

bool isPrime (int a) {
    for (int i = 2; i*i <= a; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, m, p = 0;
    cin>>n>>m;
    for (int i = n+1; i <= m; i++) {
        if (isPrime(i)) {
            p = i;
            break;
        }
    }
    if (p == m) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}



//Codeforces Problem: Panoramix's Prediction
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/80/A