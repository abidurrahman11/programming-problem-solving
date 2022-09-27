#include<iostream>
using namespace std;

int main () {
    char arr[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin>>arr[i][j];
        }
    }
    if(arr[0][0] == arr[2][2] && arr[0][2] == arr[2][0] && arr[0][1] == arr[2][1] && arr[1][0] == arr[1][2]) {
      cout <<"YES";
    } else{
      cout <<"NO";
    }
    return 0;
}


//Codeforces Problem: Super Agent
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/12/A