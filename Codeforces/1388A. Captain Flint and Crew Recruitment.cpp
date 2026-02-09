#include<bits/stdc++.h>
using namespace std;
int main(){
long long tc,n;
cin>>tc;
while(tc--)
{
    cin>>n;
    if(n<=30)cout<<"NO"<<endl;
    else {
        if(n-30==14 ||n-30==10||n-30==6)
            cout<<"YES\n6 10 15 "<<n-31<<endl;
        else
            cout<<"YES\n6 10 14 "<<n-30<<endl;
    }


}

}
