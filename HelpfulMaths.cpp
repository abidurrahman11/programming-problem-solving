#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    string s;
    cin>>s;
    char arr[100];
    int temp, count = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+') {
            arr[count] = s[i];
            count++;
        }
    }

    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        if (i == count - 1) {
            cout<<arr[i];
        } else {
            cout<<arr[i]<<"+";
        }
    }

    return 0;
}



//Codeforces Problem: Helpful Maths
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/339/A