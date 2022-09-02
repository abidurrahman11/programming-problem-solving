#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;

int main () {
    float n, m, a, b;
    vector <float> s;
    cin>>n>>m;
    while (n--) {
        cin>>a>>b;
        s.push_back(a/b);
    }
    sort(s.begin(), s.end());
    cout<<fixed<<setprecision(8)<<s[0]*m;
    return 0;
}


//Codeforces Problem: Supermarket
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/919/A