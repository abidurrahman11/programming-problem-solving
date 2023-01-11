// Codeforces Problem: 334A - Candy Bags
// Link: https://codeforces.com/problemset/problem/334/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int start = 1, end = n * n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            cout<<start<<" "<<end<<" ";
            start++;
            end--;
        }
        cout<<"\n";
    }
    return 0;
}