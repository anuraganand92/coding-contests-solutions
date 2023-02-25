void solve() {
	int n;
	string s;
	cin>>n;
	cin>>s;
	string revstr = s;
	reverse(revstr.begin(), revstr.end());
	if (s == revstr) {
		cout<<"YES"<<ln;
		return;
	}
	int i = 0, j = n - 1;
	while (i <= j) {
		if (s[i] == s[j]) 
			i++, j--;
		else 
			break;
	}
	while (i <= j) {
		if (s[i] != s[j]) {
			s[i] = s[j];
			i++, j--;
		}
		else
			break;
	}
	revstr = s;
	reverse(revstr.begin(), revstr.end());
	
	if (s == revstr) cout<<"YES"<<ln;
	else cout<<"NO"<<ln;
}
