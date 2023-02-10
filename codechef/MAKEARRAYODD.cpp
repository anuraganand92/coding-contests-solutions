#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin>>t;
    while (t--) {
        ll n,x,even=0;
        cin>>n>>x;
        ll a[n];
        for (int i=0;i<n;i++) {
            cin>>a[i];
            if (a[i]%2==0) even++;
        }
        if (x%2) {
            if (even%2)
                cout<<even/2+1<<endl;
            else
                cout<<even/2<<endl;
        }
        else {
            if (even!=n)
                cout<<even<<endl;
            else
                cout<<-1<<endl;
        }
    }
    return 0;
}