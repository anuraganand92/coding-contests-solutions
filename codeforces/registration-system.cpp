void solve() {
    ll n;
    cin >> n;
    string s;
    map <string, ll> m;
    forn(i, n) {
        cin >> s;
        if (m.find(s)==m.end()) {
            m[s] = 1;
            cout << "OK" << ln;
        } else {
            cout << s << m[s] << ln;
            m[s]++;
        }
    }
}
