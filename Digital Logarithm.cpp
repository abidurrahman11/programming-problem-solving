#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"
#define ws " "
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

int main () {
    FASTIO
    int t;
    cin>>t;
    while (t--) {
        int n, x;
        cin>>n;
        priority_queue <int> pa, pb;
        for (int i = 0; i < n; i++) {
            cin>>x;
            pa.push (x);
        }
        for (int i = 0; i < n; i++) {
            cin>>x;
            pb.push (x);
        }
        int ans = 0;
        while ((int) pa.size () != 0) {
            if (pa.top () == pb.top ()) {
                pa.pop ();
                pb.pop ();
            } else if (pa.top () > pb.top ()) {
                int l = to_string (pa.top ()).size ();
                pa.pop ();
                pa.push (l);
                ans++;
            } else {
                int l = to_string (pb.top ()).size ();
                pb.pop ();
                pb.push (l);
                ans++;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}