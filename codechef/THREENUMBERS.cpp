#include <bits/stdc++.h>
using namespace std;

typedef long long ll

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll absDiff1 = abs(a-b), absDiff2=abs(a-c), absDiff3=abs(b-c);
        if(absDiff1%2==1 || absDiff2%2==1 || absDiff3%2==1)
        cout<<-1<<endl;
        else{
            ll res=0;
            while(1){
                if(a==b && b==c) break;
                if(a>=b && a>=c){
                    ll absDiff1=a-b;
                    ll absDiff2=a-c;
                    ll diff=min(absDiff1,absDiff2);
                    if(diff==0)
                    diff=max(absDiff1,absDiff2);
                    res+=diff/2;
                    a-=diff/2;   
                    b+=diff/2;
                    c+=diff/2;
                }
                else if(b>=a && b>=c){
                    ll absDiff1=b-a;
                    ll absDiff2=b-c;
                    ll diff = min(absDiff1,absDiff2);
                    if(diff==0)
                    diff=max(absDiff1,absDiff2);
                    res+=diff/2;
                    a+=diff/2;
                    b-=diff/2;
                    c+=diff/2;
                }
                else if(c>=a && c>=b){
                    ll absDiff1=c-b;
                    ll absDiff2=c-a;
                    ll diff=min(absDiff1,absDiff2); 
                    if(diff==0)
                    diff=max(absDiff1,absDiff2);
                    res+=diff/2;
                    a+=diff/2;
                    b+=diff/2;
                    c-=diff/2;
                }
            }
            cout<<res<<endl;
        }
    }
} 
