#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, y, i, n;
    cin>>x>>y;

    if (x==0){
        cout<<2<<" "<<y<<"\n";
    }
    else if (y==0){
        cout<<1<<" "<<x<<"\n";
    }
    else {
        if (x>y){
            cout<<1<<" "<<x-y<<"\n";
        }
        else if(x<y){
            cout<<2<<" "<<y-x<<"\n";
        }
        while (cin>>i>>n){
            if (i==1){
                cout<<2<<" "<<n<<"\n";
            }
            else if(i==2){
                cout<<1<<" "<<n<<"\n";
            }
        }
    }
    return 0;
}
