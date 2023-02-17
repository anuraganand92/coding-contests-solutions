void solve() {
    ll n,k;
    cin>>n>>k;
    ll b=0,e=0;
    forn(i,n) {
        ll l,r;
        cin>>l>>r;
        if (l==k) b++; if (r==k) e++;
    }
    if (e>0 && b>0) {
        cout<<"YES"<<ln;
    } 
    else 
        cout<<"NO"<<ln;   
}
