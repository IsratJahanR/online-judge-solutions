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

        cin>>n>>m;
        char s[n][m];
        /*for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)s[i][j]='0';
        }*/
        for(i=0;i<n;i++)
        {
            //s[i]="";
            if(i==0)
            {
               for(j=0;j<m;j++)
               {
                   if(j%2==0)s[i][j]='1'; //cout<<1;
                   else s[i][j]='0'; //cout<<0;
               }

            }
            else if(i>0 && i<n-1)
            {
              for(j=0;j<m;j++)
              {
                  if(j==0 && s[i-1][j]=='0')s[i][j]='1';
                  else if(j==m-1 && s[i-1][j]=='0' && s[i-1][j-1]=='0' && s[i][j-1]=='0')s[i][j]='1';
                  else s[i][j]='0';
              }

            }
            else
            {
            for(j=0;j<m;j++)
              {
                  if(j==0 && s[i-1][j]=='0' && s[i-1][j+1]=='0')s[i][j]='1';
                  else if(j>0 && j<m-1 && s[i][j-1]=='0' && s[i-1][j-1]=='0' && s[i-1][j]=='0' && s[i-1][j+1]=='0')s[i][j]='1';
                  else if(j==m-1 && s[i][j-1]=='0' && s[i-1][j-1]=='0' && s[i-1][j]=='0')s[i][j]='1';
                  else s[i][j]='0';
              }
            }
            //cout<<endl;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)cout<<s[i][j];
            cout<<endl;
        }

    }
    return 0;
}

