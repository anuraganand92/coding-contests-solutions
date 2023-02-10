ll digitSum(int n) {
    if (n == 0)
        return 0;
    return n % 10 + digitSum(n / 10);
}
 
void solve() {
    ll n;
    cin >> n;
    ll i = 0, temp = 0;
    ll arr[10];
    
    ll x = 0, y = 0, m = 1;
 
    while (n) {
        arr[i++] = n % 10;
        n /= 10;
    }
 
    v32 v1(10), v2(10);
 
    forsn(j, 0, i) {
 
        if (arr[j] & 1){
            v1[j] = arr[j] / 2 + temp;
            v2[j] = arr[j] / 2 + 1 - temp;
            temp = 1 - temp;
        }
        else
            v1[j] = v2[j] = arr[j] / 2;
    }
 
    forsn(j, 0, i) {
        y += v2[j] * m, x += v1[j] * m;
        m *= 10;
    }
 
    cout << x << " " << y << ln;
}