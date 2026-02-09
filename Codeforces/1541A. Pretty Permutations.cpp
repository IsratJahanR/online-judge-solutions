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
/*int n;
int a[N];

int d[N];

void dfs(int l,int r,int depth)
  {
    if (l > r) return;
    int idx = -1;
    for (int i = l; i <= r; ++i)
        {
           if (idx == -1 || a[i] > a[idx])idx = i;
        }

    d[idx] = depth;
    dfs(l, idx - 1, depth + 1);
    dfs(idx + 1, r, depth + 1);
  }*/


int main()
{

   	//fastio()
   	//seive();
   	ll t,tt=1; cin>>tt;
    while(tt--)
    {
        lli n,u,v,j,mx=0,mn,ans,i,ii,nn,sum=0,m,x,y,d,k;
        cin>>n;
        ll a[n+1];
        for(i=1;i<=n;i++)a[i]=i;
        if(n%2==0)
        {
            for(i=1;i<=n;i+=2)swap(a[i],a[i+1]);
        }
        else
        {
            a[1]=3;
            a[2]=1;
            a[3]=2;
            for(i=4;i<=n;i+=2)swap(a[i],a[i+1]);
        }
        for(i=1;i<=n;i++)cout<<a[i]<<" ";
        cout<<endl;



    }
    return 0;
}

