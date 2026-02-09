///                      Author: Israt Jahan Reshma
///                            ID:18ICTCSE041
///                             Dept.of CSE
///                                BSMRSTU

///......................****************************............................///


#include<bits/stdc++.h>
#include<set>
#include<iostream>
using namespace std;


//.....................Keywords..................>
#define pb              push_back
#define ll              long long
#define lli             long long int
#define F               first
#define s               second
#define mp              make_pair
#define I               insert
#define endl            '\n'
#define pob             pop_back
#define inf             1e9+9

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

const int N = 2e5 + 7;
int num[N + 2][31];

void count() {
    memset(num, 0, sizeof num);
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < 31; j++) {
            if ((i & (1 << j))) num[i][j]++;
            num[i][j] += num[i - 1][j];
        }
    }
    /*for(int i=0;i<N;i++)
    {
        for(int j=0;j<=4;j++)cout<<cnt[i][j];
        cout<<endl;
    }*/
}
void solve()
{

}

int main(){

   	//fastio()
    //Sieve();

   	ll tc; //tc=1;
    cin>>tc;
    count();
    while(tc--)
    {
        ll n,m,j,mx1=0,mx=0,mn=inf,i,res,temp=0,tmp1,tmp2,ii,nn=-1,k,sum=0,ans=0,s;
        ll a,b,n1,n2;
        cin>>a>>b;
        nn = b-a+1;
        for(i=0;i<31;i++)mn=min(mn,nn-(num[b][i]-num[a-1][i]));
        cout<<mn<<endl;
    }
 }


