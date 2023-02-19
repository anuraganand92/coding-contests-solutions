#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < m; i++) {
        int b;
        cin >> b;
        sum += a[b - 1];
    }
    cout << sum << endl;
}
