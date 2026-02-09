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



int main()
{

   	//fastio()
   //	seive();
   	ll t; cin>>t;
    while(t--)
    {
        ll n,m,u,v,j,mx1=0,mx2=0,mn,ans,i,res,temp=0,ii,nn,f=0,k;
        cin>>k>>n>>m;
        ll a[n],b[m];
        vector<int> v1,v2;
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<m;i++)cin>>b[i];
        ll x=0,y=0;
        for(i=0;i<m+n;i++)
        {
            if(x<n && a[x]==0)
            {
                v1.pb(a[x]);
                k++;
                x++;
            }
            else if(y<m && b[y]==0)
            {
                    v1.pb(b[y]);
                    k++;
                    y++;
            }
            else if(x<n && a[x]<=k)
            {
                    v1.pb(a[x]);
                    x++;
            }
            else if(y<m && b[y]<=k)
            {
                    v1.pb(b[y]);
                    y++;
            }
            else
            {
                f=1;
                break;
            }
        }

        if(f==1)cout<<-1<<endl;
        else
        {
            for(i=0;i<v1.size();i++)cout<<v1[i]<<" ";
            cout<<endl;

        }


    }
    return 0;
}

