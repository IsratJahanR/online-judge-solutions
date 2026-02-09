///                      Author: Israt Jahan Reshma
///                            ID:18ICTCSE041
///                             Dept.of CSE
///                      Sheikh Hasina ICT Institute
///                                BSMRSTU

///......................****************************............................///


#include<bits/stdc++.h>
#include<iostream>
#include<string>
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

//#define FastRead        ios_base::sync_with_stdio(0);cin.tie(nullptr);
//#define fastio()        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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

    //FastRead
    int tc; tc=1;
    //cin>>tc;
    while(tc--)
    {

        ll mx=0,n,x,r1=0,r2=0,y,p,k,b,i,u,v,q,a,j,m,ans;
        cin>>n>>k;
        int ar[26];
        for(i=0;i<26;i++)ar[i]=0;
        string s;
        cin>>s;
        if(n==1){cout<<1<<endl; continue;}
        b=1;
        p=s[0]-'0';
        map<char,int>mp;
        map<char,int>::iterator it;
        char ch=s[0];

        for(i=1;i<n;i++)
        {
          if(s[i]==s[i-1])
          {
              b++;
              ch=s[i];

          }
          else
          {
             mp[ch]+=b/k;
            // p=s[i]-'0';
             ch=s[i];
             b=1;
          }
        }
       // for(i=0;i<26;i++)cout<<ar[i];
        if(b>1)mp[ch]+=b/k;
        //ans = *max_element(ar,ar+26);
        ans=0;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>ans)ans=it->second;
            //cout<<it->first<<" "<<it->second<<endl;
        }
        cout<<ans<<endl;



    }
    return 0;
}



