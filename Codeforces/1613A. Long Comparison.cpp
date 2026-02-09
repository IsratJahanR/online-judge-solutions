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


//.....................Keywords..................>
#define pb              push_back
#define ll              long long
#define lli             long long int
//#define f               first
//#define s               second
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


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,j,mx1=0,mx=0,d,mn,i,res,temp=0,tmp1,tmp2,ii,nn,f,k,sum=0,c,e,ans=0,x,y,l,r;
        ll x1,p1,x2,p2,n1=0,n2=0;
        cin>>x1>>p1;
        cin>>x2>>p2;
        vector<int>v1,v2;
        x = x1;

        while(x!=0)
        {
           n1++;
           v1.pb(x%10);
           x/=10;
        }
        reverse(v1);
        x = x2;
        while(x!=0)
        {
           n2++;
           v2.pb(x%10);
           x/=10;
        }
        reverse(v2);
        if(v1.size()+p1>v2.size()+p2)cout<<">"<<endl;
        else if(v1.size()+p1<v2.size()+p2)cout<<"<"<<endl;
        else
        {
            if(v1.size()<v2.size())
            {
              while(v1.size()<v2.size())
                  {
                  v1.pb(0);
                  }
            }
            if(v1.size()>v2.size())
            {
              while(v1.size()>v2.size())
                  {
                  v2.pb(0);
                  }
            }
            bool f1=0,f2=0;
            for(i=0;i<v1.size();i++)
            {
                if(v1[i]>v2[i])
                {
                   f1=1;
                   break;
                }
                else if(v1[i]<v2[i])
                {
                   f2=1;
                   break;
                }
            }
            if(f1==1)cout<<">"<<endl;
            else if(f2==1)cout<<"<"<<endl;
            else cout<<"="<<endl;
        }

    }
 }


