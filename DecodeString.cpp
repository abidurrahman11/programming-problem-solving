#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans = "";

        for (int i = 0; i < n; i++) {
            if (i+2 < n && s[i+2] == '0' && (i+3 >= n || s[i+3] != '0')) {
                int num = (((s[i] - '0') * 10) + (s[i+1] - '0'));
                ans.push_back((char) (96 + num));
                i += 2;
            } else {
                int num = (s[i] - '0');
                ans.push_back((char) (96 + num));
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}


//Codeforces Problem: Decode String
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/1729/B