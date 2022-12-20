// Codeforces Problem: Duff and Meat
// Link: https://codeforces.com/problemset/problem/588/A
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int kg[n], price[n], mini = INT_MAX, total = 0;
    for (int i = 0; i < n; i++) {
        cin>>kg[i]>>price[i];
        if (price[i] < mini) {
            mini = price[i];
        }
        total += kg[i];
    }
    int pri = 0;
    int currSm = price[0];
    for (int i = 0; ; i++) {
        if (price[i] < currSm) {
            currSm = price[i];
        }
        pri += kg[i] * currSm;
        total -= kg[i];
        if (total == 0) {
            break;
        }
    }
    cout<<pri;
    return 0;
}