#include<iostream>
int main () {
    int a1, a2, a3, b1, b2, b3, n;
    std::cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;

    int cups = (a1+a2+a3+4)/5;
    int medals = (b1+b2+b3+9)/10;

    if (cups+medals <= n) {
        std::cout<<"YES";
    } else {
        std::cout<<"NO";
    }

    return 0;
}


//Codeforces Problem: Rewards
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/448/A