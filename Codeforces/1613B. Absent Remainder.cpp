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
        cin>>n;
        ll a[n];
        map<int,int>mp;
        map<int,int> :: iterator it;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        ans = n/2;
        d = ans;
        vector<int>v,v1,v2;
        for(it=mp.begin();it!=mp.end();++it)
        {
            x = it->first;
            v.pb(x);

        }
        for(i=0;i<v.size();i++)
        {
            x =v[i];
            for(j=i+1;j<v.size();j++)
            {
               y=v[j];
               if(ans==0)break;
               if(x>y && mp[x%y]==0 && ans!=0)
               {
                 v1.pb(x);
                 v2.pb(y);
                 ans--;
               }
               else if(y>x && mp[y%x]==0 && ans!=0)
               {
                 v1.pb(y);
                 v2.pb(x);
                 ans--;
               }
            }
            if(ans==0)break;
        }
        //cout<<d<<endl;
        for(i=0;i<d;i++)
        {
            cout<<v1[i]<<" "<<v2[i]<<endl;
        }

    }
 }



