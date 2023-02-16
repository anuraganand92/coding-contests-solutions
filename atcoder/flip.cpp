void solve() {
    string s;
    cin >> s;
    for (auto i : s) {
        if (i == '1') {
            cout << "0";
        } else if (i == '0') {
            cout << "1";
        }
    }
}
