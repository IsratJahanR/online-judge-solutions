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
    int tc; //tc=1;
    cin>>tc;
    string ch;
    getline(cin,ch);
    while(tc--)
    {

        ll mx=0,n,x,r1=0,r2=0,y,p,k,b,ans,i,u,v,q,a,j;

        getline(cin,ch);
        n = ch.length();
       // cout<<n<<endl;
        if(n<5){cout<<"OMG>.< I don't know!"<<endl; continue;}
        bool f1=0,f2=0;
        if(ch[0]=='m' && ch[1]=='i' && ch[2]=='a' && ch[3]=='o' && ch[4]=='.')f1=1;
        if(ch[n-5]=='l' && ch[n-4]=='a' && ch[n-3]=='l' && ch[n-2]=='a' && ch[n-1]=='.')f2=1;
        if(f1==1 && f2 ==0)cout<<"Rainbow's"<<endl;
        else if(f1==0 && f2 == 1)cout<<"Freda's"<<endl;
        else cout<<"OMG>.< I don't know!"<<endl;

    }
    return 0;
}



