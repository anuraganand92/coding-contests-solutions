#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int n,u,d;
	    cin>>n>>u>>d;
	    int para=1;
	    vector<int> h;
	    int input;
	    for (int i=0;i<n;i++) {
	        cin>>input;
	        h.push_back(input);
	    }
	    int count=1;
	    for (int j=1;j<n;j++) {
	        if ((h[j]-h[j-1])<=u && (h[j-1]-h[j]<=d)) count++;
	        else if ((h[j-1]-h[j])>=d && para==1) {
	            count++;
	            para=0;
	        }
	        else
	            break;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
