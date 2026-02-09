#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
            ll n,x,m,l,r;
            cin>>n>>x>>m;
            l=x;
            r=x;
            for(ll i=0;i<m;i++){
                ll a,b;
                cin>>a>>b;
                if(b<l || a>r)continue;
                l=min(l,a);
                r=max(r,b);



   }


   cout<<r-l+1<<endl;
}
return 0;

}
