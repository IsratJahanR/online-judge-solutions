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
        ll n,i,s1=0,s2=0,i1=-1,i2=-1,p,j1,j2,j,x=1,y=1,b,s3=0,maxe=-1,c,m,q;
        cin>>n>>q;
        ll a[n];
        for(i=0;i<n;i++)cin>>a[i];
        ll qr[q],an[q];
        for(i=0;i<q;i++)cin>>qr[i];
        for(i=0;i<q;i++)
        {
            for(j=0;j<n;j++)
            {
                if(qr[i]==a[j])
                {
                    an[i]=j+1;
                    while(j>0)
                    {
                        swap(a[j],a[j-1]);
                        j--;
                    }
                    break;
                }
            }
        }
        for(i=0;i<q;i++)cout<<an[i]<<" ";
        cout<<endl;


    }

    return 0;
}

