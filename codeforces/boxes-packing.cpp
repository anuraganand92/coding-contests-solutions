typedef pair<ll,ll> p64;
#define fi first
#define se second

void solve() {
    ll n,a,ans=0;
    cin>>n;
    map<ll,ll> m;
    forn(i,n) {
        cin>>a;
        m[a]++;
    }
    ll flag;
    for(p64 it:m) {
        flag=it.se;
        ans=max(ans,flag);
    }
    cout<<ans<<ln;
}
