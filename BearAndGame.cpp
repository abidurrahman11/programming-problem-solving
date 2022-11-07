// Codeforces Problem: Bear and Game
// Link: https://codeforces.com/problemset/problem/673/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, curr = 0, flag = 0, ans;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    if (arr[0] > 15) {
        cout<<15;
        return 0;
    }
    for (int i = 1; i < n; i++) {
        if (arr[i] - arr[i - 1] > 15) {
            curr = i - 1;
            flag = 1;
            break;
        }
    }
    if (flag == 1) {
        ans = arr[curr] + 15;
    } else {
        ans = arr[n - 1] + 15;
    }
    if (ans > 90) {
        cout<<90;
    } else {
        cout<<ans;
    }
    return 0;
}