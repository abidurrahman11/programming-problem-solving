#include<iostream>
using namespace std;

int main () {
    int n, cubes = 0, total = 0, count = 0;
    cin>>n;
    for (int i = 1; i <=n; i++) {
        cubes+=i;
        total+=cubes;
        if (total > n) {
            break;
        }
        count++;
    }
    cout<<count;
    return 0;
}


//Codeforces Problem: Vanya and Cubes
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/492/A