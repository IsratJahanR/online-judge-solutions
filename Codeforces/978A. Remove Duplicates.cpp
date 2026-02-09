#include<bits/stdc++.h>
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
using namespace std;
int main()
{
    MP
    int n; cin>>n;
    int a[n];
    vector<int> v;
    for(int i=0;i<n;i++){cin>>a[i]; }
    if(n==1){cout<<n<<endl<<a[0]<<endl; return 0; }
    if(n==2)
    {
        if(a[0]==a[1])cout<<1<<endl<<a[0]<<endl;
        else cout<<2<<endl<<a[0]<<" "<<a[1]<<endl;
        return 0;
    }
    for(int i=n-2;i>=0;i--)
    {
        int c=0;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])c=1;
        }
        if(c==0)v.pb(a[i]);
    }
    int p=v.size();
    cout<<p+1<<endl;
    for(int i=p-1;i>=0;i--)cout<<v[i]<<" ";
    cout<<a[n-1]<<endl;

}
