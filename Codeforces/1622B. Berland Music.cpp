///                      Author: Israt Jahan Reshma
///                            ID:18ICTCSE041
///                             Dept.of CSE
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
#define F               first
#define S               second
#define mp              make_pair
#define I               insert
#define endl            '\n'
#define pob             pop_back
#define inf             1e9+9

///.....................function..................>

#define fastio()        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define loop(a,b)       for(ll i=a;i<b;i++)
#define loopr(a,b)      for(ll i=a-1;i>=b;i--)
#define sort(a)         sort(a.begin(),a.end())
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

const int N = 2e5 + 7;
const lli M =998244353;



int main(){

   	//fastio()
    //Sieve();

   	ll tc; //tc=1;
    cin>>tc;
    //solve();
    while(tc--)
    {
        lli n,m,j,mx1=0,mx=0,mn=inf,i,res,temp=0,tmp1,tmp2,ii,nn=-1,k,sum=0,ans=0;
        cin>>n;
        int p[n];
        map<int,int>q;

        vector<int> a,b;

        for(i=0;i<n;i++)cin>>p[i];

        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')a.pb(p[i]);
            else b.pb(p[i]);
        }
        //sort(a.begin(),a.end());
        //sort(b.begin(),b.end());
        sort(a);
        sort(b);

        //cout<<a.size()<<endl;
        temp=n;

        for(i=a.size()-1;i>=0;i--)
        {
            //cout<<a[i];
          q[a[i]]=temp;
          temp--;
        }
        for(i=b.size()-1;i>=0;i--)
        {
          q[b[i]]=temp;
          temp--;
        }
        for(i=0;i<n;i++)cout<<q[p[i]]<<" ";
        cout<<endl;


    }
 }


