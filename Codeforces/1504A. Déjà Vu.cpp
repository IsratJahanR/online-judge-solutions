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
string palin(string s)
{
    vector<char>ch;
   //for(int i=0;i<s.size();i++) ch.push_back(s[i]);
   s=s+"a";
   for(int i=0,j=s.size()-1;i<s.size()&& j>=0;i++,j--)
   {
       if(s[i]!=s[j])break;
       else if(j>0) swap(s[j],s[j-1]);
       if(s[i]!=s[j])break;
   }
   return s;

}



int main()
{

    //FastRead
    int tc; //tc=1;
    cin>>tc;
    while(tc--)
    {

        ll mx=0,n,x,r1=0,r2=0,y,p,k,b,i,u,v,q,a,j,m,ans,sa=0;
        string s;
        cin>>s;
        n=s.size();
        {
            for(i=0;i<n;i++)if(s[i]=='a')sa++;
            if(sa==n)cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
               string ss= palin(s);
               for(i=0;i<=n;i++)cout<<ss[i];
                cout<<endl;
            }
        }



    }
    return 0;
}

