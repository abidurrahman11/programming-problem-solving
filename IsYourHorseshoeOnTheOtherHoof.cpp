// Codeforces Problem: Is your horseshoe on the other hoof?
// Link: https://codeforces.com/problemset/problem/228/A
// Status: Accepted      Language: C++

#include<iostream>
#include<set>
using namespace std;

int main () {
    set <int> s;
    for (int i = 0; i < 4; i++) {
        int x;
        cin>>x;
        s.insert(x);
    }
    cout<<4 - s.size();
    return 0;
}