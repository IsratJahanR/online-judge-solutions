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
        cin>>n>>m;
        ll x1,y1,x2,y2;
        cin>>x1>>y1;
        cin>>x2>>y2;
        i=x1;
        j=y1;
        int f1=0,f2=0;

        while(1)
        {
            if(i==x2 || j==y2)break;
            if(i==n)f1=1;
            if(j==m)f2=1;

            if(f1==0)i++;
            else i--;

            if(f2==0)j++;
            else j--;



            sum++;
        }

        cout<<sum<<endl;


    }
 }
