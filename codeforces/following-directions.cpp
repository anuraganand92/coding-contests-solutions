void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int u=0,r=0;
    for (auto c:s) {
        if (c=='R') r++;
        if (c=='U') u++;
        if (c=='D') u--;
        if (c=='L') r--;
 
        if (u==1 && r==1) {
        cout<<"yes"<<endl;
        return;
        }
    }
    cout<<"no"<<endl;
}