void solve() {
    char c;
    cin>>c;
    string s="codeforces";
    for (auto i : s) {
        if (i == c) {
            cout<<"yes"<<endl;
            return;
        }
            
    }
    cout<<"no"<<endl;
}