
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++){cin>>a[i]; b[i]=a[i];}
    sort(a,a+n);
    int p=0;
    vector<int> v;
    for(int i=0;i<n-1;i++)
    {
      if(a[i]!=a[i+1])v.push_back(a[i]);
    }
    v.push_back(a[n-1]);
    vector<int > aa;
    //cout<<v.size()<<endl;
    if(v.size()>=k){
            cout<<"YES"<<endl;
            int p=0,q=0;
            for(int j=0;j<v.size();j++)
            {
                for(int i=0;i<n;i++)
                {
                    if(p==k)q==1;
                    if(v[j]==b[i] && p<k){aa.push_back(i+1); p++; break;}
                }
                if(q==1)break;
            }
            sort(aa.begin(),aa.end());
            for(int i=0;i<aa.size();i++)cout<<aa[i]<<" ";
    }
    else cout<<"NO"<<endl;
}
