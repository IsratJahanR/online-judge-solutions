
///                      Author: Israt Jahan Reshma
///                            ID:18ICTCSE041
///                             Dept.of CSE
///                      Sheikh Hasina ICT Institute
///                                BSMRSTU

///......................****************************............................///


#include<bits/stdc++.h>
#include<set>
#include<iostream>
using namespace std;


///.....................Keywords..................>
#define pb              push_back
#define ll              long long
#define lli             long long int
//#define f               first
#define s               second
#define mp              make_pair
#define I               insert
#define endl            '\n'
#define pob             pop_back

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
#define pll             pair <ll, ll>

int main(){

   	//fastio()
    //seive();
   	ll t; cin>>t;
    while(t--)
    {
        ll n,m,u,j,mx1=0,mx=0,mn,i,res,temp=0,temp1,temp2,ii,nn,f=0,k,sum=0,amn,amx,c,d,e,ans=0;
       cin>>n;
       string s;
       cin>>s;
       if(n==1)
       {
           cout<<1<<endl<<s<<endl;
           continue;
       }
       f=0;
       int a1=0,a2=0,a3=0,a4=0;
       for(i=0;i<n;i++)
       {
           if(s[i]=='1' || s[i]=='4' || s[i] =='6' || s[i]=='8' || s[i]=='9')
              {
                 temp1=1;
                 temp2=s[i]-48;
                 f=1;
              }
           if(s[i]=='2')a1++;
           if(s[i]=='3')a2++;
           if(s[i]=='5')a3++;
           if(s[i]=='7')a4++;
       }
       if(f==0)
       {
          if(a1>1)temp1=2, temp2=22, f=1;
          else if(a2>1)temp1=2, temp2=33,f=1;
          else if(a3>1)temp1=2, temp2=55,f=1;
          else if(a4>1)temp1=2, temp2=77, f=1;
       }
       if(f==0){
       for(i=n-1;i>=0;i--)
       {
           if((s[i]=='5' || s[i]=='2') && i!=0)
           {
               temp1=2;
               temp2=(s[i-1]-48)*10+s[i]-48;
               f=1;
               break;
           }
           else if(s[i]=='2' && i==0)
           {
           temp1=2;
           temp2=27;
           f=1;
           break;
           }
          else if(s[i]=='5' && i==0)
           {
           temp1=2;
           temp2=57;
           f=1;

           break;
           }
       }
       }
       if(f==0)cout<<n<<endl<<s<<endl;
       else cout<<temp1<<endl<<temp2<<endl;

    }

 }


