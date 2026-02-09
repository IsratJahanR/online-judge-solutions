#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    long long n,p=1,l,i;
    cin>>n;
    if(n==3)cout<<1<<" "<<1<<" "<<1<<endl;
    else if(n<=2)cout<<n<<" "<<0<<" "<<0<<endl;
    //else if(n<2) cout<<"I'm too stupid to solve this problem"<<endl;
    //int f1=0,f2=1;
    else {
    vector<long long > v;
    v.pb(0);
    v.pb(1);
    for( i=2;;i++)
    {
      p=v[i-1]+v[i-2];
      v.pb(p);
      if(p==n)break;

    }
    l=v.size();
    //cout<<l<<endl;
    if(n>=5)cout<<v[l-2]<<" "<<v[l-4]<< " "<<v[l-5]<<endl;
    }

    //for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
}
