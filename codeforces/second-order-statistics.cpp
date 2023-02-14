void solve() {
    int n;
    cin >> n;
    set <int> s;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    auto it = s.begin();
    if (s.size() == 1) {
        cout << "NO" << ln;
        return;
    } else {
        it++;
        cout << *it << ln;
    }
}
