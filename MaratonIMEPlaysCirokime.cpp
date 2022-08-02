#include<bits/stdc++.h>
using namespace std;

int func(int n) {
    if (n==1){
        return 1;
    } else {
        return func(n/2) + 1;
    }
}

int main() {
    int n;
    cin>>n;
    int a[n], b;

    for (int i = 0; i<n; i++) {
        cin>>a[i];
    }
    b = func(n);
    cout<<b;
    return 0;
}

//https://codeforces.com/gym/100985/problem/B