// Codeforces Problem: Team Olympiad
// Link: https://codeforces.com/problemset/problem/490/A
// Status: Accepted      Language: C++

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    vector <int> one, two, three;
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin>>x;
        if (x == 1) {
            one.push_back(i);
        } else if (x == 2) {
            two.push_back(i);
        } else {
            three.push_back(i);
        }
    }
    int teams = min(one.size(), min(two.size(), three.size()));
    cout<<teams<<"\n";
    for (int i = 0; i < teams; i++) {
        cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<"\n";
    }
    return 0;
}