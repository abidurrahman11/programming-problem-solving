#include<iostream>
#include<algorithm>
using namespace std;

void ans() {
    int n;
    cin>>n;
    if (n == 2) {
        cout<<"2 1\n";
    } else if (n == 3) {
        cout<<"-1\n";
    } else if (n == 4) {
        cout<<"4 3 1 2\n";
    } else {
        for (int i = n; i > (n/2)+1; i--) {
            cout<<i<<" ";
        }
        for (int i = 1; i <= (n/2)+1; i++) {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        ans();
    }
    return 0;
}


//Codeforces Problem: Funny Permutation
//Link: https://codeforces.com/problemset/problem/1741/B
//Status: Accepted      Language: C++