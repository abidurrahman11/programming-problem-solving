#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, temp;
    cin>>t;
    while (t--)
    {
        long long a, b;
        cin>>a>>b;

        while (b != 0)
        {
            long long remainder = a%b;
            a = b;
            b = remainder;
        }

        if (a > 1 && sizeof(a) <= 16)
        {
            cout<<"Sim"<<"\n";
        } else {
            cout<<"Nao"<<"\n";
        }
              
    }

    return 0;
}


//https://codeforces.com/problemset/gymProblem/100985/A