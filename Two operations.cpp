// Codeforces Problem: C - Two operations
// SPC 2019
// Link: https://codeforces.com/gym/102419/problem/C
// Status: Accepted      Language: C++

#include<iostream>
#include<cmath>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, primeSum = 0, cnt = 0;
        cin>>n;
        while (n % 2 == 0) {
            primeSum += 2;
            cnt++;
            n /= 2;
        }
        for (int i = 3; i <= sqrt (n); i += 2) {
            while (n % i == 0) {
                primeSum += i;
                cnt++;
                n /= i;
            }
        }
        if (n > 2) {
            primeSum += n;
            cnt++;
        }
        cout<<1 + (primeSum - cnt)<<"\n";
    }
    return 0;
}