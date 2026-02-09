#include<bits/stdc++.h>

#define ll long long
#define pb push_back
const int         MxN = (int) 1e6 + 6;


using namespace std;

int main()
{

    int tc=1,Case=1; cin>>tc;
    while(tc--)
    {
       ll n,i,j,k,p,x,y,H,M,mn=1000000,q,kk;
       cin>>n>>H>>M;
       vector<pair<ll,ll>>pr;
       q=H*60+M;
       for(i=0;i<n;i++){
            cin>>x>>y;

            if(x<H || (x==H && y<M))
            {
              p=60*24+x*60+y;
            }
            else p=x*60+y;

            mn=min(abs(p-q),mn);
       }
       cout<<mn/60<<" "<<mn%60<<endl;
      // sort(pr.begin(),pr.end());

    }

   return 0;
}
