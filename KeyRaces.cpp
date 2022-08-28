#include<iostream>
using namespace std;

int main () {
    int s, v1, v2, t1, t2;
    cin>>s>>v1>>v2>>t1>>t2;
    int boy1 = (s*v1) + (t1*2);
    int boy2 = (s*v2) + (t2*2);
    if (boy1 < boy2) {
        cout<<"First";
    } else if (boy2 < boy1) {
        cout<<"Second";
    } else {
        cout<<"Friendship";
    }
    return 0;
}


//Codeforces Problem: Key races
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/835/A