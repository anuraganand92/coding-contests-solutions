#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,x;

    cin>>t;
    while (t--) {
        cin>>n>>x;
        if (n>x && (n-x)%4==0)
            cout<<(n-x)/4<<endl;
        else if (n>x && (n-x)%4!=0)
            cout<<((n-x)/4)+1<<endl;
        else
            cout<<0<<endl;
    }
    return 0; 
}
