#include<iostream>
using namespace std;

int main () {
    long long n , x, distress = 0;
    cin>>n>>x;
    while (n--) {
        string s;
        long long d;
        cin>>s>>d;
        if (s == "+") {
            x+=d;
        } else if (s == "-" && x >= d) {
            x-=d;
        } else {
            distress++;
        }
    }
    cout<<x<<" "<<distress;
    return 0;
}


//Codeforces Problem: Free Ice Cream
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/686/A