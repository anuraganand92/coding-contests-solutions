#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while (t--) {
	    long long n;
	    cin>>n;
	    long long a[n];
	    for (long long i=0;i<n;i++)
	        cin>>a[i];

	    long long r1 = INT_MIN;
	    long long r2 = INT_MAX;
	    
	    for (long long i=0;i<n;i++) {
	        if (a[i] >=0 && a[i] < r2)
	            r2 = a[i];

	        else if( a[i] < 0 && a[i] > r1)
	            r1=a[i];
	    }

	    long long ans = min(r2,abs(r1));

	    cout<<ans-1<<endl;
	}
	return 0;
}