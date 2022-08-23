#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, i, bestSkill = 0, winnerIndex = 0, winners = 0;
    cin>>n;
    long long arr[n];

    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }

    for (i = 0; i < n; i++) {
        bestSkill = max(bestSkill, arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (bestSkill == arr[i]) {
            winnerIndex = i + 1;
            winners++;
        }
    }

    if (winners == 1) {
        cout<<winnerIndex;
    } else {
        cout<<-1;
    }

    return 0;
}


//Codeforces Problem: MaratonIME goes karting
//Status: Accepted
//Link: https://codeforces.com/gym/100985/problem/L