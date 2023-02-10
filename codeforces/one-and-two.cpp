void solve() {
    int n,count=0,u=0,d=0;
    cin >> n;
    v32 a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    for (int i=0;i<n;i++) {
        if (a[i]==1) u++;
        else d++;
    }
    if (d%2) {
        cout<<-1<<ln;
        return;
    }
    if (d == 0) {
        cout<<1<<ln;
        return;
    }
    for (int i=0;i<n;i++) {
        if (a[i]==2) count++;
        if (count == d/2) {
            cout<<i+1<<ln;
            return;
        }
    }
}