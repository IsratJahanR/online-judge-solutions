///                      Author: Israt Jahan Reshma
///                            ID:18ICTCSE041
///                             Dept.of CSE
///                      Sheikh Hasina ICT Institute
///                                BSMRSTU

///......................****************************............................///


#include<bits/stdc++.h>
#include<set>
#include<iostream>
using namespace std;


///.....................Keywords..................>
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
   	ll t; //cin>>t;
   	t=1;
    while(t--)
    {
        ll n,m,u,j,mx1=0,mx=0,mn,i,res,temp=0,tmp1,tmp2,ii,nn,f=0,k,sum=0,c,d,e,ans=0,x,y;
        string s,s1,s2;
        char ch[200][200];
        cin>>s;
        n=s.size();
        for(i=1;i<(n/2);i++)
        {
           s1="";
           s2="";
           for(j=0;j<i;j++)
           {
               s1+=s[j];
           }
           for(j=i;j<2*i;j++)
           {
               s2+=s[j];
           }
           if(s1==s2)ans=s1.size();
        }

        cout<<ans*2<<endl;


    }

 }


