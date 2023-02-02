#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool solve(int n , vector<ll> arr ,ll mid)
{
    vector<ll> newArr =arr;
    if(newArr[0] > mid)
		return false;
	for (int i=1;i<n;i++) {
		if(newArr[i-1]<mid) {
			ll buffer = mid - newArr[i-1];
			newArr[i-1]=mid;
			newArr[i]=newArr[i]-buffer;
		}
		if (newArr[i] > mid)
			return false;
	}
	ll maxElem = *max_element(newArr.begin(),newArr.end());
    if (maxElem > mid)
		return false;

	return true;
}
int main() {
	int t;
	
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<ll> arr(n);
	    for(int i=0 ; i < n ;i++)
	        cin>>arr[i];
	    ll  i = 0;
	    ll  j = *max_element(arr.begin(),arr.end());
	    
	    ll ans = LONG_MAX;
	    
	    while( i <= j){
	        ll mid = i + (j-i) / 2;
	        
	        if(solve(n , arr ,mid )){
	            ans = min(ans,mid);
	            j = mid - 1;
	        }
	        else{
	            i = mid + 1;
	        }
	    }
	    
	    cout<<ans<<endl;
	}
	
	return 0;
}