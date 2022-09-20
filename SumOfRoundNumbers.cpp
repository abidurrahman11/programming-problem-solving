#include<iostream>
#include<vector>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, power = 1;
        cin>>n;
        vector <int> v;
        while (n > 0) {
            if (n%10 > 0) {
                v.push_back((n%10) * power);
            }
            n /= 10;
            power *= 10;
        }
        cout<<v.size()<<"\n";
        for (auto j: v) {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}



//Codeforces Problem: Sum of Round Numbers
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/1352/A