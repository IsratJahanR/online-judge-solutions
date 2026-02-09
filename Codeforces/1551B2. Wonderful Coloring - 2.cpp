///                      Author: Israt Jahan Reshma
///                            ID:18ICTCSE041
///                             Dept.of CSE
///                      Sheikh Hasina ICT Institute
///                                BSMRSTU

///......................****************************............................///


#include<bits/stdc++.h>
using namespace std;

///.....................Keywords..................>
#define pb              push_back
#define ll              long long
#define lli             long long int
#define f               first
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
#define pll            pair <ll, ll>



int main()
{

   	//fastio()
    //seive();
   	ll t; cin>>t;
    while(t--)
    {
        ll n,m,u,j,mx1=0,mx2=0,mn,ans=0,i,res,temp=0,ii,nn,f=0,k,sum=0,x;
        cin>>n>>k;
        vector<pll> v;
        map<ll,ll>mp1,mp2;
        for(i=1;i<=n;i++)
        {
             cin>>x;
             mp1[x]++;
             if(mp1[x]<=k)v.pb({x,i});
             mp2[i]=0;
        }

        sort(v.begin(),v.end());
        ll kk=v.size()/k;
        //cout<<kk<<endl;

        for(i=0;i<kk*k;i++)
        {
            temp=(i+1)%k;
            if(temp==0)temp = k;
            mp2[v[i].second]=temp;
        }

        for(i=1;i<=n;i++)cout<<mp2[i]<<" ";
        cout<<endl;

    }

 }


