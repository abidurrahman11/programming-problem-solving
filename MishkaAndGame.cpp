#include<iostream>
using namespace std;

int main () {
    int n, a, b, mishka = 0, chris = 0;
    cin>>n;
    while (n--) {
        cin>>a>>b;
        if (a > b) {
            mishka++;
        } else if (a < b) {
            chris++;
        }
    }
    if (mishka > chris) {
        cout<<"Mishka";
    } else if (mishka < chris) {
        cout<<"Chris";
    } else {
        cout<<"Friendship is magic!^^";
    }
    return 0;
}