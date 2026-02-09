#include<bits/stdc++.h>

///.....................Keywords..................>
#define pb              push_back
#define ll              long long
#define lli             long long int
//#define f               first
//#define s               second
#define mp              make_pair
#define I               insert
#define endl            '\n'

///.....................function..................>


#define Fast        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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


using namespace std;
int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n,i,s1=0,s2=0,i1,i2,p,j1,j2,j,x=0;
        cin>>n;
        string s[n];
        for(i=0;i<n;i++)
        {
            cin>>s[i];
            if(x<2)
            {
               for(j=0;j<n;j++)
                {
                   if(s[i][j]=='*')
                    {
                      if(x==0)i1=i,j1=j;
                      else i2=i,j2=j;
                      x++;
                    }
                }
            }
        }
        if(j1==j2)
        {
            if(j1==0){s[i1][1]='*'; s[i2][1]='*'; }
            else {s[i1][0]='*'; s[i2][0]='*'; }
        }
        else if(i1==i2)
        {
            if(i1==0){s[1][j1]='*'; s[1][j2]='*'; }
            else {s[0][j1]='*'; s[0][j2]='*'; }
        }
        else
        {
            s[i2][j1]='*';
            s[i1][j2]='*';
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)cout<<s[i][j];
            cout<<endl;
        }
    }


    return 0;
}
