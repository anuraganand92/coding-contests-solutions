#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    string proposal;
    int count=0;
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>proposal;
        if (proposal=="For") count++;
    }
    if (count>n/2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
