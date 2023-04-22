// Codeforces Problem: 368B - Sereja and Suffixes
// Link: https://codeforces.com/problemset/problem/368/B
// Status: Accepted      Language: C++

#include<iostream>
#include<unordered_set>
using namespace std;

int main () {
    int n, m, tot = 0;
    cin>>n>>m;
    int arr[n + 1], arr2[n + 1];
    unordered_set <int> st;
    for (int i = 1; i <= n; i++) {
        cin>>arr[i];
    }
    for (int i = n; i >= 0; i--) {
        st.insert(arr[i]);
        arr2[i] = st.size();
    }
    for (int i = 0; i < m; i++) {
        int x;
        cin>>x;
        cout<<arr2[x]<<"\n";
    }
    return 0;
}