// Codeforces Problem: D - Distinct Split
// Link: https://codeforces.com/contest/1791/problem/D
// Status: Accepted      Language: C++

#include<iostream>
#include<map>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> front;
        map<char,int> back; 
        int ans = -1;
        for (int i = 0; i < n; i++) {
            back[s[i]]++;  
        }        
        for (int i = 0; i < n; i++) {
            front[s[i]]++;
            back[s[i]]--;
            if (back[s[i]] == 0) {
                back.erase(s[i]);
            }
            int x = front.size();
            int y = back.size();
            ans = max(ans , x+y);
        }
        cout<<ans<<endl;
    }
    return 0;
}