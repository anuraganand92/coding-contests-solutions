void solve() {
    ll a,b,c;
    cin>>a>>b>>c;
    if (abs(c-b)>=a) {
        cout<<"NO"<<ln;
        return;
    }
    cout<<"YES"<<ln;
}
