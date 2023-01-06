#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        char a, b, c, d, e, f;
        cin>>a>>b>>c>>d>>e>>f;
        if (a + b + c == d + e + f) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}