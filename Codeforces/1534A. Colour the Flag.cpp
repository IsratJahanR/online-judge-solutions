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
#define mll             map<ll,ll>

///.....................function..................>


#define Fast            ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define loop(a,b)       for(ll i=a;i<b;i++)
#define loopr(a,b)      for(ll i=a-1;i>=b;i--)
//#define sort(a)         sort(a.begin(),a.end())
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        (a*(b/gcd(a,b)))
#define yes             cout<<"YES\n";
#define no              cout<<"NO\n";
#define rev_sort(a)     sort(a.begin(),a.end(),greater<int>())
#define reverse(a)      reverse(a.begin(),a.end())
#define mem(a,b)        memset(a, b, sizeof(a) )
#define max_ele(a,n)    *max_element(a,a+n)
#define min_ele(a,n)    *min_element(a,a+n)
#define print(a,n)      for(ll i=0;i<n;i++)cout<<a<<" ";


int main()
{
    //Fast
    ll tc=1; cin>>tc;
    //seive();
    while(tc--)
    {
        ll n,k,i1,i2,i,j1,j2,ans=0,j,mx,mn,a1,a2,l,r,L,R,m;
        cin>>n>>m;
        string s[n];
        char s1[n][m],s2[n][m];
        for(i=0;i<n;i++)
        {
            cin>>s[i];
        }
        bool f1=0,f2=0;
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
              for(j=0;j<m;j++)
              {
                if(j%2==0)
                {
                    s1[i][j]='R';
                    s2[i][j]='W';
                }
                else
                {
                    s1[i][j]='W';
                    s2[i][j]='R';
                }
              }
            }
            else{
              for(j=0;j<m;j++)
              {
                 if(j%2==0)
                {
                    s1[i][j]='W';
                    s2[i][j]='R';
                }
                else
                {
                    s1[i][j]='R';
                    s2[i][j]='W';
                }
              }
            }

        }
        for(i=0;i<n;i++)
        {
                for(j=0;j<m;j++)
                {
                    if(s1[i][j]!=s[i][j] && s[i][j]!='.')f1=1;
                    if(s2[i][j]!=s[i][j] && s[i][j]!='.')f2=1;
                }

        }
        //cout<<f1<<f2;
        if(f1==0)
        {
            cout<<"YES"<<endl;
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)cout<<s1[i][j];
                cout<<endl;
            }
        }
        else if(f2==0)
        {
            cout<<"YES"<<endl;
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)cout<<s2[i][j];
                cout<<endl;
            }
        }
        else cout<<"NO"<<endl;


    }
    return 0;
}





