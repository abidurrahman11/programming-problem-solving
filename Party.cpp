// Codeforces Problem: 115A - Party
// Link: https://codeforces.com/problemset/problem/115/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n, dpt = 0;
    cin>>n;
    int arr[n + 1];
    for (int i = 1; i < n + 1; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i < n + 1; i++)
    {
        int CrnDpt = 1, j = i;
        while (arr[j] != -1) {
            CrnDpt++;
            j = arr[j];
        }
        dpt = max (dpt, CrnDpt);
    }
    cout<<dpt;
    return 0;
}