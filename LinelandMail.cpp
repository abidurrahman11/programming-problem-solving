// Codeforces Problem: 567A - Lineland Mail
// Link: https://codeforces.com/problemset/problem/567/A
// Status: Accepted      Language: C++

#include<iostream>
#include<cstdlib>

using namespace std;

int main () {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout<<abs (arr[0] - arr[1])<<" "<<abs (arr[0] - arr[n - 1])<<"\n";
    for (int i = 1; i < n - 1; i++) {
        cout<<min (abs (arr[i] - arr[i - 1]), abs (arr[i] - arr[i + 1]))<<" "<<max (abs (arr[i] - arr[0]), abs (arr[i] - arr[n - 1]))<<"\n";
    }
    cout<<abs (arr[n - 2] - arr[n - 1])<<" "<<abs (arr[n - 1] - arr[0])<<"\n";
    return 0;
}