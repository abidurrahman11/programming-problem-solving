// Codeforces Problem: 149A - Business trip
// Link: https://codeforces.com/problemset/problem/149/A
// Status: Accepted      Language: C++

#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    int k, count = 0, month = 0;
    cin>>k;
    int arr[12];
    for (int i = 0; i < 12; i++) {
        cin>>arr[i];
    }
    sort (arr, arr + 12, greater <int> ());
    for (int i = 0; i < 12; i++) {
        if (count >= k) {
            break;
        }
        count += arr[i];
        month++;
    }
    if (count < k) {
        cout<<-1;
    } else {
        cout<<month;
    }
    return 0;
}