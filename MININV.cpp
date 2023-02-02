#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll y2 = 1e9 + 7;
ll sum = 0;
vector<ll> p(1e6);

void fact() {
    for (ll i = 1; i <= 1e6; i++) {
        if (i == 0) {
            p[i] = 1;
        }
        else {
            p[i] = (p[i - 1] % y2) * ((i + 1) % y2);
        }
    }
}

ll pow2(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) {
            res = res * a;
        }
        a = (a * a);
        b >>= 1;
    }
    return res;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        map<ll, ll> mp1;
        map<ll, ll> mp2;
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            mp1[v[i]]++;
        }
        vector<ll> v1(n + 1, 0);
        for (ll i = n - 1; i >= 0; i--) {
            v1[i] = v1[i + 1];
            v1[i] += mp1[v[i] + 1];
            v1[i] -= mp2[v[i] - 1];
            mp1[v[i]]--;
            mp2[v[i]]++;
        }
        ll ans = 0;
        
        for (ll i = 0; i < n; i++) {
            ans = max(ans, v1[i]);
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}