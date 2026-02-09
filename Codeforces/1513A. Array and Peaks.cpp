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
        ll n,i,s1=0,s2=0,i1,i2,p,j1,j2,j,x=0,b,k,sum=0,maxe=-1;
        cin>>n>>k;
        ll a[n];
        p=(n-1)/2;
        if(p<k){cout<<-1<<endl; continue; }
        b=n;
        i1=0;
        for(i=0,j=1;i<n;i++)
        {
            if(i%2==0)
                {
                    cout<<j+i1<<" ";
                    i1++;
                }
            else
            {
                if(k>0){cout<<b<<" "; k--; b--; }
                else{ cout<<j+i1<<" ";
                    i1++;
                }
            }
        }
        cout<<endl;




    }

    return 0;
}
