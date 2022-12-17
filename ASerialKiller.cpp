// Codeforces Problem: A Serial Killer
// Link: https://codeforces.com/problemset/problem/776/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    string kill, rep;
    cin>>kill>>rep;
    cout<<kill<<" "<<rep<<"\n";
    int n;
    cin>>n;
    while (n--) {
        string vic1, vic2;
        cin>>vic1>>vic2;
        if (vic1 == kill) {
            kill = vic2;
        } else if (vic2 == kill) {
            kill = vic1;
        } else if (vic1 == rep) {
            rep = vic2;
        } else {
            rep = vic1;
        }
        cout<<kill<<" "<<rep<<"\n";
    }
    return 0;
}