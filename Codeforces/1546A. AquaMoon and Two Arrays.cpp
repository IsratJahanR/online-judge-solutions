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
        ll n,m,u,v,j,mx1=0,mx2=0,mn,ans,i,res,temp=0,ii,nn,f=0,k,sum=0;
        cin>>n;
        ll a[n],b[n];
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n;i++)cin>>b[i];
        vector<pair<int,int> >pr;
        for(i=0;i<n;i++)
        {
            sum+=(a[i]-b[i]);
        }
        if(sum!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>b[i])
            {
             j=i+1;
             while(a[i]!=b[i] && j<n)
             {
                 if(a[j]<b[j])
                 {
                     a[i]--;
                     a[j]++;
                     pr.pb(mp(i+1,j+1));
                 }
                 else j++;
             }
            }
            if(a[i]<b[i])
            {
             j=i+1;
             while(a[i]!=b[i] && j<n)
             {
                 if(a[j]>b[j])
                 {
                     a[i]++;
                     a[j]--;
                     pr.pb(mp(j+1,i+1));
                 }
                 else j++;
             }
            }



    }
    cout<<pr.size()<<endl;
    for(i=0;i<pr.size();i++)
    {
        cout<<pr[i].first<<" "<<pr[i].second<<endl;
    }

    }
    return 0;
}

