// Codeforces Problem: Greg's Workout
// Link: https://codeforces.com/problemset/problem/255/A
// Status: Accepted      Language: C++

#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    int n;
    cin>>n;
    int ch = 0, bi = 0, bk = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        cin>>x;
        if (i%3 == 1) {
            ch += x;
        } else if (i%3 == 2) {
            bi += x;
        } else {
            bk += x;
        }
    }
    int mx = max({ch, bi, bk});
    if (mx == ch) {
        cout<<"chest";
    } else if (mx == bi) {
        cout<<"biceps";
    } else {
        cout<<"back";
    }
    return 0;
}