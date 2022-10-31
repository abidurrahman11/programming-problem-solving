// Codeforces Problem: Arrival of the General
// Link: https://codeforces.com/problemset/problem/144/A
// Status: Accepted      Language: C++

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],ma=0,mi=101,mx = 0,mn = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i] > ma)
        {
            ma = arr[i];
            mx = i;
        }
        if(arr[i] <= mi)
        {
            mi = arr[i];
            mn = i;
        }
    }
    if(mx > mn)
    {
        mn++;
    }
    cout<<mx + (n - 1) - mn;
}