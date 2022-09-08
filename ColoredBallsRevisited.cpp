#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, index;
        cin>>n;
        int arr[n];
        int ans = 0;
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++) {
            ans = max(ans, arr[i]);
        }

        for (int i = 0; i < n; i++) {
            if (ans == arr[i]) {
                index = i + 1;
            }
        }
        cout<<index<<"\n";
    }
    return 0;
}