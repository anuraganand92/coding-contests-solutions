#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int n;
	    cin>>n;
	    int a[2*n];
	    for(int i=0;i<2*n;i++)
			cin>>a[i];
	    sort(a,a+2*n);
	    int ans=INT_MAX;
	    for(int i=0;i<=n;i++)
			ans=min(ans,a[i+n-1]-a[i]);
	    cout<<ans<<endl;
	}
	return 0;
}