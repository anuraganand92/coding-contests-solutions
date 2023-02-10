#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin>>t;
    while (t--) {
        ll n;
        cin>>n;
        if (n%2==1) {
            cout<<-1<<endl;
            continue;
        }
        ll x=1;
        vector<ll> v(n,0);
        for (ll i=0;i<n/2;i++) {
            if(i%2==0) {
                v[i]=x;
                v[n-i-1]=-x;
            }
            else {
                v[i]=-x;
                v[n-i-1]=x;
            }
            x++;
        }
        for (auto i:v) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}