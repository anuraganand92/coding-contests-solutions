#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    
    vector<pair<int, int>> ranks(n); 
    for (int i = 0; i < n; i++) {
        ranks[i] = make_pair(i + 1, i);
    }
    sort(ranks.begin(), ranks.end(), [&](pair<int, int> a, pair<int, int> b) {
        if (s[a.second] != s[b.second]) {
            return s[a.second] == 'o';
        }
        return a.first < b.first;
    });
    
    string t(n, 'x');
    for (int i = 0; i < k; i++) {
        t[ranks[i].second] = 'o';
    }
    
    cout << t << endl;
    return 0;
}
