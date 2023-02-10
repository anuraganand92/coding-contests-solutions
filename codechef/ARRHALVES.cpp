#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    long long n;
	    cin>>n;
	    long long a[2*n];
	    for(long long i=0;i<2*n;i++) 
			cin>>a[i];
	    vector <long long> x,y;
	    for(long long i=0;i<n;i++) {
	        if(a[i]>n)  
				x.push_back(i);
	    }
	    for(long long i=n;i<2*n;i++) {
	        if(a[i]<=n) 
				y.push_back(i);
	    }
		
	    long long ans=0;
	    for(long long i=0;i<x.size();i++) 
			ans+=(y[i]-x[i]);
	    cout<<ans<<endl;
	}
	return 0;
}