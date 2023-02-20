// Codeforces Problem: 1776H - Beppa and SwerChat
// Link: https://codeforces.com/problemset/problem/1776/H
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int ans = 0, idx = n - 1;
        int arr[n], arr2[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++) {
            cin>>arr2[i];
        }
        bool flag = true;
        for (int i = n - 1; i >= 0; i--) {
            if (flag == false) {
                break;
            }
            for (int j = n - 1; j >= 0; j--) {
                if (arr2[i] == arr[j]) {
                    if (j > idx) {
                        flag = false;
                        ans = i + 1;
                        break;
                    }
                    idx = j;
                    break;
                }

            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}