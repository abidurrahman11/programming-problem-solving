// Codeforces Problem: 363A - Soroban
// Link: https://codeforces.com/problemset/problem/363/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;

int main () {
    string num;
    cin>>num;
    int len = num.length();
    string dgt[10] = {"O-|-OOOO", "O-|O-OOO", "O-|OO-OO", "O-|OOO-O", "O-|OOOO-", "-O|-OOOO", "-O|O-OOO", "-O|OO-OO", "-O|OOO-O", "-O|OOOO-"};
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '0') {
            cout<<dgt[0]<<"\n";
        } else if (num[i] == '1') {
            cout<<dgt[1]<<"\n";
        } else if (num[i] == '2') {
            cout<<dgt[2]<<"\n";
        } else if (num[i] == '3') {
            cout<<dgt[3]<<"\n";
        } else if (num[i] == '4') {
            cout<<dgt[4]<<"\n";
        } else if (num[i] == '5') {
            cout<<dgt[5]<<"\n";
        } else if (num[i] == '6') {
            cout<<dgt[6]<<"\n";
        } else if (num[i] == '7') {
            cout<<dgt[7]<<"\n";
        } else if (num[i] == '8') {
            cout<<dgt[8]<<"\n";
        } else if (num[i] == '9') {
            cout<<dgt[9]<<"\n";
        }
    }
    return 0;
}