#include<bits/stdc++.h>

#define ll long long int
#define pb push_back
#define fastio()        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int         MxN = (int) 1e6 + 6;


using namespace std;

int main()
{
    //fastio();

    int tc=1,Case=1; cin>>tc;
    while(tc--)
    {
       ll n,i,j,k,p,x,y,H,M,mn=1000000,q,kk;
       cin>>n;
       vector<ll>v(n);
       map<ll,ll>mp;
       for(i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%10==5)v[i]+=5;
       }
       sort(v.begin(),v.end());
       if(v[0]==v[n-1])
       {
           cout<<"YES"<<endl;
           continue;
       }
       int f=0;
       for(i=0;i<n;i++)
       {
           x=v[i]%10;
           if(x==0)
           {
              f=1;
              break;
           }
           if(x%2==1)v[i]+=x;
       }
       if(f==0){
            sort(v.begin(),v.end());
            x=v[n-1];
            for(i=0;i<n;i++)
            {
                while(v[i]%10 !=x%10)
                {
                    v[i]+=(v[i]%10);
                }
                if((abs(x-v[i]))%20==10)
                {
                    f=1;
                    break;
                }
            }

       }
       if(f==1)cout<<"NO"<<endl;
       else cout<<"YES"<<endl;

    }

   return 0;
}
