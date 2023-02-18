// Codeforces Problem: 1788A - One and Two
// Link: https://codeforces.com/problemset/problem/1788/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, two = 0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] == 2) {
                two++;
            }
        }
        if (two & 1) {
            cout<<-1<<"\n";
        } else if (two == 0) {
            cout<<1<<"\n";
        } else {
            int half = two / 2;
            for (int i = 0; i < n; i++) {
                if (arr[i] == 2) {
                    half--;
                }
                if (half == 0) {
                    cout<< i + 1<<"\n";
                    break;
                }
            }
        }
    }
    return 0;
}