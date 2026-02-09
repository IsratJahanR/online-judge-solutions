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
    ll tc=1; //cin>>tc;
    while(tc--)
    {
        ll n,i,k,p,an;
        string s;
        cin>>s;
        if(s.size()<=2)cout<<"YES"<<endl;
        else
        {
            k=s[0]-'A';
            p=s[1]-'A';
            for(i=2;i<s.size();i++)
            {
               n=s[i]-'A';
              // cout<<k<<" "<<p<<" "<<n<<endl;
               an=(k+p)%26;
               if(n!=an)
               {
                   cout<<"NO"<<endl;
                   return 0;
               }
               k=s[i-1]-'A';
               p=s[i]-'A';
            }
            cout<<"YES"<<endl;

        }

    }

    return 0;
}
