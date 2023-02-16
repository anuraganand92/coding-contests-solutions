void solve() {
    ll n,ans=0;
    string s;
    cin>>n;
    cin>>s;
    v64 v;
    forn(i,n) {
        if(s[i]!='0') {
            v.pb(i);
        }
    }
    if (v.size()==1) {
        cout<<0<<ln;
        return;
    }
    if (v.size()==0) {
        cout<<n<<ln;
        return;
    }
    forn(i,v.size()-1) {
        if(s[v[i]]!=s[v[i+1]]) {
            ll flag=v[i+1]-v[i]-1;
            if(flag%2!=0)
                ans+=1;
        }
    }
    cout<<ans<<ln;
}
