   /// Israt Jahan Reshma


#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--){
    ll x,y,n,p,result;
    cin>>x>>y>>n;
    p=(n-y)/x;
    result=p*x+y;
    cout<<result<<endl;
    }


}
