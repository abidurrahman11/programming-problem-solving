// Codeforces Problem: Bear and Five Cards
// Link: https://codeforces.com/problemset/problem/680/A
// Status: Accepted      Language: C++

#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main () {
    int x, sum = 0, ans;
    map <int, int> mp;
    for (int i = 0; i < 5; i++) {
        cin>>x;
        mp[x]++;
        sum += x;
    }
    ans = sum;
    for (auto a : mp) {
        if (a.second > 2) {
            ans = min(ans, sum - 3 * a.first);
        }
        if (a.second > 1) {
            ans = min(ans, sum - 2 * a.first);
        }
    }
    cout<<ans;
    return 0;
}