#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while (t--) {
        int n, k;
        cin>> n >> k;
        int a[n], b[n], tempArr[n];

        for (int i = 0; i < n; i++) {
            cin>> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin>> b[i];
        }

        int temp;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] > a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (b[i] < b[j]) {
                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (k > 0 && a[i] < b[i]) {
                tempArr[i] = a[i];
                a[i] = b[i];
                b[i] = tempArr[i];
                k--;
            }
        }

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum+=a[i];
        }
        cout<< sum<< "\n";
    }
    return 0;
}

//https://codeforces.com/problemset/problem/1353/B