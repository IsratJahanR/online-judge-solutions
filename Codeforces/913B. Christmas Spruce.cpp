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
   	ll t=1; //cin>>t;
    while(t--)
    {
        ll n,u,v,j,mx=0,mn,ans,i,d1=0,d2=0,d0=0,ml=1,mul=1,res,temp=0,ii,nn,sum=0,m,x,y,d,k;
        cin>>n;
        ll a[n];
        map<int, int>mp;
        map<int, int>::iterator it;
        vector<int>ve[1005],v2;
        for(i=2;i<=n;i++)
        {
            cin>>x;
            ve[x].pb(i);
        }
        bool f=0;
        for(i=1;i<=n;i++)
        {
            if(ve[i].size()==0)continue;
            int cnt=0;
            for(j=0;j<ve[i].size();j++)
            {
                k=ve[i][j];
                if(ve[k].size()==0)cnt++;
            }
            if(cnt<3)
            {
                f=1;
                break;
            }
        }

       if(f==1) cout<<"No"<<endl;
       else cout<<"Yes"<<endl;



    }
    return 0;
}

