#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    char a, b, c, d;
    while (t--) {
        set <char> s;
        cin>>a>>b>>c>>d;
        s.insert(a);
        s.insert(b);
        s.insert(c);
        s.insert(d);
        cout<<s.size()-1<<"\n";
    }
    return 0;
}


//Codeforces Problem: Image
//Status: Accepted
//Link: https://codeforces.com/contest/1721/problem/A