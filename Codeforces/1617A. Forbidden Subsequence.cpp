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
        string S,T;
        cin>>S;
        cin>>T;
        int a=0;
        b=0,c=0;
        sort(S.begin(),S.end());
        for(i=0;i<S.size();i++)
        {
            if(S[i]=='a')a++;
            if(S[i]=='b')b++;
            if(S[i]=='c')c++;
        }
        if(T=="abc" && a>0 && b>0 && c>0)
        {
           for(i=0;i<S.size();i++)
           {
             if(S[i]=='a')cout<<S[i];
           }
           for(i=0;i<S.size();i++)
           {
             if(S[i]=='c')cout<<S[i];
           }
           for(i=0;i<S.size();i++)
           {
             if(S[i]!='c' && S[i]!='a')cout<<S[i];
           }
           cout<<endl;
        }
        else cout<<S<<endl;


    }

 }



