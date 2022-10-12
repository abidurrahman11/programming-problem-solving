#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        string s1, s2;
        cin>>s1>>s2;
        int fs = 0, ss = 0;
        if (s1[s1.length() - 1] == 'L') {
            fs += 10000;
        } else if (s1[s1.length() - 1] == 'M') {
            fs += 5000;
        } else if (s1[s1.length() - 1] == 'S') {
            fs += 2000;
        }

        if (s2[s2.length() - 1] == 'L') {
            ss += 10000;
        } else if (s2[s2.length() - 1] == 'M') {
            ss += 5000;
        } else if (s2[s2.length() - 1] == 'S') {
            ss += 2000;
        }

        if (fs > ss) {
            cout<<">\n";
        } else if (fs < ss) {
            cout<<"<\n";
        } else {
            for (int i = 0; i < s1.length() - 2; i++) {
                fs++;
            }
            for (int i = 0; i < s2.length() - 2; i++) {
                ss++;
            }

            if (fs > ss && s1[s1.length() - 1] != 'S') {
                cout<<">\n";
            } else if (fs < ss && s1[s1.length() - 1] != 'S') {
                cout<<"<\n";
            } else if (fs == ss) {
                cout<<"=\n";
            } else {
                if (fs < ss) {
                    cout<<">\n";
                } else {
                    cout<<"<\n";
                }
            }
        }
    }
    return 0;
}


//Codeforces Problem: Compare T-Shirt Sizes
//Link: https://codeforces.com/problemset/problem/1741/A
//Status: Accepted      Language: C++