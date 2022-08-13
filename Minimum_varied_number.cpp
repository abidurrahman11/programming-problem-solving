#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    while (t--) {
        vector<int> v;
        int s, start = 9;
        cin>>s;

        while (s) {
            if (s > start) {
                v.push_back(start);
                s -= start;
                start--;
            } else {
                v.push_back(s);
                s = 0;
            }
        }

        for (i = v.size()-1; i >= 0; i--) {
            cout<<v[i];
        }
        cout<<"\n";
          
    }
    return 0;
}

//https://codeforces.com/problemset/problem/1714/C