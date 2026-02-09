#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    int t,p,i,j,k;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1){cout<<"FastestFinger"<<endl;}
        else if(n==2 || n%2!=0)cout<<"Ashishgup"<<endl;
        else{
              bool b=false  ;
            for(i=3;i*i<=n;i++)
           {
               if(n%i==0)
               {
                if(i%2==1 || (n/i)%2==1)b=true;
               }

           }


               if(b) cout<<"Ashishgup"<<endl;
               else cout<<"FastestFinger"<<endl;
        }
    }

}
