///                      Author: Israt Jahan Reshma
///                            ID:18ICTCSE041
///                             Dept.of CSE
///                                BSMRSTU

///......................****************************............................///


#include<bits/stdc++.h>
#include<set>
#include<iostream>
using namespace std;


//.....................Keywords..................>
#define pb              push_back
#define ll              long long
#define lli             long long int
//#define f               first
#define s               second
#define mp              make_pair
#define I               insert
#define endl            '\n'
#define pob             pop_back

///.....................function..................>

#define fastio()        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define loop(a,b)       for(ll i=a;i<b;i++)
#define loopr(a,b)      for(ll i=a-1;i>=b;i--)
//#define sort(a)         sort(a.begin(),a.end())
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        (a*(b/gcd(a,b)))
#define yes             cout<<"YES\n";
#define no              cout<<"NO\n";
#define rev_sort(a)     sort(a.begin(),a.end(),greater<>())
#define reverse(a)      reverse(a.begin(),a.end())
#define mem(a,b)        memset(a, b, sizeof(a) )
#define max_ele(a,n)    *max_element(a,a+n)
#define min_ele(a,n)    *min_element(a,a+n)
#define print(a,n)      for(ll i=0;i<n;i++)cout<<a<<" ";
#define pll             pair <ll, ll>



int main(){

   	//fastio()
    //seive();
   	ll t; //t=1;
    cin>>t;

    while(t--)
    {
        ll n,m,j,mx1=0,mx=0,d,mn,i,res,temp=0,tmp1,tmp2,ii,nn,k,sum=0,c,e,ans=0,b;
        cin>>n;
        lli a;
        vector<lli>x,y;
        for(i=0;i<n;i++)
        {
          cin>>a;
          if(i%2==0)x.pb(a);
          else y.pb(a);
        }
        //cout<<"asdf"<<endl;
        int f1 = 0;
        ll g1 = x[0];
        for(i=1;i<x.size();i++)
        {
           g1 = gcd(x[i],g1);
        }
        for(i=0;i<y.size();i++)
        {
            if(y[i]%g1==0)
            {
                f1=1;
                break;
            }
        }
        int f2=0;
        ll g2 = y[0];
        for(i=1;i<y.size();i++)
        {
            g2 = gcd(y[i],g2);
        }
        for(i=0;i<x.size();i++)
        {
            if(x[i]%g2==0)
            {
                f2=1;
                break;
            }
        }

        if(f1==0 && g1>1)cout<<g1<<endl;
        else if(f2==0 && g2>1)cout<<g2<<endl;
        else cout<<0<<endl;




    }

 }



