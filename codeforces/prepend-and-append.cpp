void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int length = n;
    int begin = 0;
    int end = n-1;
    while (begin <= end) {
        if ((s[begin] == '0' && s[end] == '1') || (s[begin] == '1' && s[end] == '0')) {
            begin++;
            end--;
            length -= 2;
        } else {
            cout<<length<<endl;
            return;
        }
    }
    cout<<length<<endl;
}