#include<iostream>
using namespace std;

int main () {
    long long yCrystal, bCrystal, y, g, b;
    cin>>yCrystal>>bCrystal>>y>>g>>b;

    long long needY = 0, needB = 0;

    long long totalY = (y * 2) + ((g * 2) / 2);
    long long totalB = ((g * 2) / 2) + (b * 3);

    if (yCrystal < totalY) {
        needY = totalY - yCrystal;
    }
    if (bCrystal < totalB) {
        needB = totalB - bCrystal;
    }

    cout<<needY + needB;
    return 0;
}


//Codeforces Problem: Tricky Alchemy
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/912/A