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

bool f;

bool eq(char x, char y){
    if(!f)
        return x == y;
    return x != y;
}


int main()
{
   // Fast
    int tc; //tc=1;
    cin>>tc;
    while(tc--)
    {

        ll mx=0,n,x,r1=0,r2=0,y,p,k,b,i,u,v,q,a,j,m,sa=0;
        cin>>n;
        string s1,s2,ans="YES";
        cin>>s1>>s2;
        f=0;
        int sum0=0,sum1=0;
        for(i=0;i<n;i++)
        {
            if(s1[i]=='1')sum1++;
            else sum0++;
        }
        for(i=n-1;i>=0;i--)
        {

            if(eq(s1[i],s2[i])==0)
            {
                if(sum1!=sum0){ans="NO";break;}
                else f=!f;
            }
            if(s1[i]=='0')sum0--;
            else sum1--;


        }
        cout<<ans<<endl;


     }
    return 0;

}
