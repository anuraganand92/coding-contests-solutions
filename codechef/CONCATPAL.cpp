void solve() {
    ll n,m;
    string a,b;
    cin>>n>>m>>a>>b;
    map <char,ll> mp;
    if (m>n) {
        swap(m,n); swap(a,b);
    }
    forn(i,n) {
        mp[a[i]]+=1;
    }
    forn(i,m) {
        mp[b[i]]-=1;
    }
    ll temp=1,count=0, diff=n-m;
    for (auto i:mp) {
        if (i.second<0) {
            temp=0; break;
        }
        if (i.second%2==0) {
            continue;
        }
        if (count) temp=0;
        else count=1;
    }
    if (temp) cout<<"YES"<<ln;
    else cout<<"NO"<<ln;
}
