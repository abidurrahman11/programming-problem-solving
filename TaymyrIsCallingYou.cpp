#include<iostream>

int main() {
    int n, m, z;
    std::cin>>n>>m>>z;
    int ans = 0;

    for (int i = 1; i <= z; i++) {
        if (i%n == 0 && i%m == 0) {
            ans++;
        }
    }
    std::cout<<ans;

    return 0;
}


//Codeforces Problem: Taymyr is calling you
//Status: Accepted
//Link: https://codeforces.com/problemset/problem/764/A