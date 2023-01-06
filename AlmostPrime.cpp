// Codeforces Problem: 26A - Almost Prime
// Link: https://codeforces.com/problemset/problem/26/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int prime[3000], index = 2;
    prime[0] = 2;
    prime[1] = 3;
    for (int i = 5; i <= 3000; i += 2) {
        int j;
        for (j = 0; j < index; j++) {
            if (i % prime[j] == 0) {
                break;
            }
        }
        if (j >= index) {
            prime[index++] = i;
        }
    }
    int n, ans = 0;
    cin>>n;
    for (int i = 6; i <= n; i++) {
        int cnt = 0;
        for (int j = 0; prime[j] <= i; j++) {
            if (i % prime[j] == 0) {
                cnt++;
            }
        }
        if (cnt == 2) {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}