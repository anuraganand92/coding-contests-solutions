#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n,m;
    cin>>n>>m;
    string s[n],t[m];
    for(ll i=0;i<n;i++)
    cin>>s[i];
    for(ll i=0;i<m;i++)
    cin>>t[i];
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(s[i].substr(3,3)==t[j])
            {
                ans++;
                break;
            }
        }
    }
    cout<<ans;
    return 0;
}