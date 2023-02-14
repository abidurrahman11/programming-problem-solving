// Codeforces Problem: 937A - Olympiad
// Link: https://codeforces.com/problemset/problem/937/A
// Status: Accepted      Language: C++

#include<iostream>
#include<unordered_set>
using namespace std;

int main () {
    int n;
    cin>>n;
    int arr[n];
    unordered_set <int> st;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
        if (arr[i] != 0) {
            st.insert(arr[i]);
        }
    }
    cout<<st.size();
    return 0;
}