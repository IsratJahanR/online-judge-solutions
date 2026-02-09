///                      Author: Israt Jahan Reshma
///                            ID:18ICTCSE041
///                             Dept.of CSE
///                      Sheikh Hasina ICT Institute
///                                BSMRSTU

///......................****************************............................///

#include<bits/stdc++.h>

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


#define Fast            ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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


using namespace std;
int main()
{
    //Fast
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n,i,k,p,an,j;
        cin>>n;
        string s;
        cin>>s;
        bool f=0;
        int t=0,m=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='T')t++;
            else if(s[i]=='M')m++;
        }
        if(s[0]=='M' || s[n-1]=='M' || t!=2*m){cout<<"NO"<<endl; continue; }
        int s1=0,s2=0;

        for(i=0,j=n-1;i<n && j>=0;i++,j--)
        {
            if(s[i]=='T')s1++;
            else
            {
                if(s1<=0){f=1; break;}
                else s1--;
            }
            if(s[j]=='T')s2++;
            else
            {
                if(s2<=0){f=1; break; }
                else s2--;
            }


        }
        if(f==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}
