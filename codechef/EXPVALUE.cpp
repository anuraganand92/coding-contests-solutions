#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod1 998244353

ll mul (ll a,ll b) {
    return ((a%mod1)*(b%mod1))%mod1;
}

ll binpow (ll a,ll b) {
    if (b==0) return 1;
    ll res = binpow(a,b/2);
    res = mul(res,res);
    if (b%2) res = mul(res,a);
    return res;
}

ll modInverse (ll a, ll m=mod1) {
    return binpow(a,m-2);
}

int main() {
    ll n,p;
    cin>>n>>p;

    vector<ll> dp(n+1,0), dp2(n+1,0);
    dp[1]=dp2[1]=modInverse(2);

    ll inv2 = modInverse(2);
    for (ll i=2;i<=n;i++) {
        ll y=binpow(p,i-1);
        y=modInverse(y);
        ll val = dp[i-1]+mul(binpow(y,2),inv2)+mul(y,dp2[i-1]);
        val%=mod1;
        dp[i]=val;
        dp2[i]=(dp2[i-1]+mul(y,inv2))%mod1;
    }
    
    for (ll i=1;i<=n;i++) cout<<dp[i]<<" ";
    cout<<endl;
    
    return 0;
}