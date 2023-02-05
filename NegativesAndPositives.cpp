// Codeforces Problem: E - Negatives and Positives
// Link: https://codeforces.com/contest/1791/problem/E
// Status: Accepted      Language: C++

#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, neg = 0,  mini = __INT_MAX__;
        long long sum = 0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] < 0) {
                neg++;
                arr[i] = -arr[i];
            }
            mini = min(mini, arr[i]);
            sum += arr[i];
        }
        if (neg % 2 == 0) {
            cout<<sum<<"\n";
        } else {
            cout<<sum - (2 * mini)<<"\n";
        }
    }
    return 0;
}