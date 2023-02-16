#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int a,b;
	    cin>>a>>b;
	    int x=gcd(a,b);
	    cout<<lcm(a,x)-gcd(b,x)<<endl;
	}
	return 0;
}
