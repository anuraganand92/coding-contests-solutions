#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,a,b,m;
    cin>>t;
    while (t--) {
        cin>>a>>b>>m;
        if (abs(a-b)<abs(m-abs(a-b)))
            cout<<abs(a-b)<<endl;
        else if (abs(a-b)>=abs(m-abs(a-b)))
            cout<<abs(m-abs(a-b))<<endl;   
    }
    return 0;
}
