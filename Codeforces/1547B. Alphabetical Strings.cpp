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
        ll n,u,v,j,mx=0,mn,ans,i,res,temp=-1,ii,nn,f=0;
        string s;
        cin>>s;
        n=s.size();
        for(i=0;i<n;i++)
        {
            if(s[i]=='a'){temp=i; break;}
        }
        if(temp==-1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
       // cout<<temp<<endl;
        s[temp]='*';
        i=temp+1;
        j=temp-1;
        char ch='b';
        nn=n-1;
        //cout<<nn<<endl;
        while(nn--)
        {
            if(i>=n && j<0)break;
            //cout<<ch<<endl;
            if(s[i]==ch && i<n)
            {
                s[i]='*';
                i++;
            }
            else if(s[j]==ch && j>=0)
            {
                s[j]='*';
                j--;
            }
            else
            {
                f=1;
                break;
            }
            ch++;
        }
        if(f==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;


    }
    return 0;
}

