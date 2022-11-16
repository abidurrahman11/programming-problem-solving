// Codeforces Problem: Infinity Gauntlet
// Link: https://codeforces.com/problemset/problem/987/A
// Status: Accepted      Language: C++

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    map <string, string> mp;
    mp.insert({"purple", "Power"});
    mp.insert({"green", "Time"});
    mp.insert({"blue", "Space"});
    mp.insert({"orange", "Soul"});
    mp.insert({"red", "Reality"});
    mp.insert({"yellow", "Mind"});
    while (n--) {
        string s;
        cin>>s;
        mp.erase(s);
    }
    cout<<mp.size()<<"\n";
    for (auto it: mp) {
        cout<<it.second<<"\n";
    }
    return 0;
}