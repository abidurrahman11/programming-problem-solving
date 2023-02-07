// Codeforces Problem: 757A - Gotta Catch Em' All!
// Link: https://codeforces.com/problemset/problem/757/A
// Status: Accepted      Language: C++

#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    string s;
    cin>>s;
    int len = s.length(), arr[7] = {0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < len; i++) {
        if (s[i] == 'B') {
            arr[0]++;
        } else if (s[i] == 'u') {
            arr[1]++;
        } else if (s[i] == 'l') {
            arr[2]++;
        } else if (s[i] == 'b') {
            arr[3]++;
        } else if (s[i] == 'a') {
            arr[4]++;
        } else if (s[i] == 's') {
            arr[5]++;
        } else if (s[i] == 'r') {
            arr[6]++;
        }
    }
    int aOrU = min(arr[1], arr[4]);
    sort(arr, arr + 7);
    if (arr[0] * 2 <= aOrU) {
        cout<<arr[0];
    } else if (aOrU / 2 <= arr[0]) {
        cout<<aOrU / 2;
    } else {
        cout<<0;
    }
    return 0;
}