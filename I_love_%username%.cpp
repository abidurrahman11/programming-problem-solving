#include<iostream>
using namespace std;
int main() {
    int t, i, s=0;
    cin>>t;
    int arr[t];

    for (i = 0; i < t; i++) {
        cin>> arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    for (i = 1; i < t; i++) {
        if (arr[i] > max) {
            max = arr[i];
            s++;
        } else if (arr[i] < min) {
            min = arr[i];
            s++;
        }
    }

    cout<<s;

    return 0;
}

//https://codeforces.com/problemset/problem/155/A