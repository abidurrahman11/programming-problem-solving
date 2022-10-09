#include<iostream>
using namespace std;

void ans() {
    int n;
    cin>>n;
    int l = 0, r = n - 1, alice = 0, bob = 0, sumL = 0, sumR = 0, moves = 0;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    while (l <= r) {
        if (moves%2 == 0) {
            int lCurr = 0;
            while (sumR >= lCurr && l <= r) {
                alice += arr[l];
                lCurr += arr[l];
                l++;
            }
            sumL = lCurr;

        } else {
            int rCurr = 0;
            while (rCurr <= sumL && l <= r) {
                bob += arr[r];
                rCurr += arr[r];
                r--;
            }
            sumR = rCurr;
        }
    moves++;
    }
    cout<<moves<<" "<<alice<<" "<<bob<<"\n";
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        ans();
    } 
    return 0;
}