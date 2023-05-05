// Codeforces Problem: B - JoJo's Incredible Adventures
// Link: https://codeforces.com/contest/1820/problem/B
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        long long len = s.length();
        s += s;
        long long cons = 0, mxLen = 0;
        for (long long i = 0; i < len * 2; i++)
        {
            if (s[i] == '1') {
                cons++;
            } else {
                mxLen = max (mxLen, cons);
                cons = 0;
            }
        }
        mxLen = max (mxLen, cons);
        if (mxLen >= len) {
            cout<<len * len<<"\n";
        } else {
            int r = (mxLen - 1) / 2;
            cout<<(mxLen - r) * (r + 1)<<"\n";
        }
    }
    
    return 0;
}