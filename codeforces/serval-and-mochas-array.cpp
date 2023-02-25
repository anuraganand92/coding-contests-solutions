void solve() {
    ll n;
    cin>>n;
    ll a[n];
    forn(i,n) {
        cin>>a[i];
    }
    ll x=INT_MAX;
    forn(i,n) {
        forsn(j,i+1,n)
			x=min(x,__gcd(a[i], a[j]));
    }
    if(x>2) cout<<"NO"<<ln;
    else cout<<"YES"<<ln;
}
