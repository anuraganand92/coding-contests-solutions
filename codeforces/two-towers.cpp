void solve() {
    ll n,m;
    string s1,s2;
    cin>>n>>m;
    cin>>s1>>s2;
    reverse(s2.begin(),s2.end());
    string s=s1+s2;
    ll temp=0;
    forn(i,n+m-1) {
        if (s[i]==s[i+1]) {
            temp++;
        }
    }
    if (temp>1) cout<<"NO"<<ln;
    else cout<<"YES"<<ln;
}
