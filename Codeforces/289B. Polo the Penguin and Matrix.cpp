///                      Author: Israt Jahan Reshma
///                            ID:18ICTCSE041
///                             Dept.of CSE
///                      Sheikh Hasina ICT Institute
///                                BSMRSTU

///......................****************************............................///


#include<bits/stdc++.h>
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


/*ll M=1000000007;
ll N=50000;
bool prime[50001];
vector <int> pr;
void seive() {
    prime[0]=0;
    prime[1]=0;
    for(int i=2;i<N;i++)prime[i]=1;

    for(int i=2;i*i<=N;i++) {
        if (prime[i]==1) {
            for (int j=i*i;j<=N;j+=i) {
                prime[j]=0;
            }
        }
    }

    for (int i=1;i<=N;i++) {
        if (prime[i]) pr.pb(i);
    }
}
*/


int main()
{

   	//fastio()
   	//seive();
   	ll t=1; //cin>>t;
    while(t--)
    {
        ll n,u,v,j,mx=0,mn,ans,i,d1=0,d2=0,d0=0,ml=1,mul=1,res,temp=0,ii,nn,sum=0,m,x,y,d;
        cin>>n>>m>>d;
        ll a[m*n+1];
        ii=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>x;
                a[ii]=x;
                ii++;
            }
        }
        sort(a,a+ii);
        temp=a[ii/2];
        ii=0;
        bool f=0;
        for(i=0;i<n*m;i++)
        {
                if(abs(a[i]-temp)%d!=0)
                {
                    f=1;
                    break;
                }
                else sum+=abs(a[i]-temp)/d;
        }
        if(f==1)cout<<-1<<endl;
        else cout<<sum<<endl;



    }
    return 0;
}

