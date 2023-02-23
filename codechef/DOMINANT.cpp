#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,na,nb,nc,maxm;
    cin>>t;
    while (t--) {
        cin>>na>>nb>>nc;
        if (max(na,nb)>nc)
            maxm=max(na,nb);
        else
            maxm=nc;
        if (maxm>(na+nb+nc-maxm))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
