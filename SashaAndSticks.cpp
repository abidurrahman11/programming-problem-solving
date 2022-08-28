#include<iostream>
using namespace std;

int main () {
    long long n, k;
    cin>>n>>k;
    long long div = n/k;

    if (div%2 == 0) {
        cout<<"NO";
    } else {
        cout<<"YES";
    }
    return 0;
}