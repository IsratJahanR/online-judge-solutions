
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,mini=2000;
cin>>n>>m;
int a[m];
for(int i=0;i<m;i++)cin>>a[i];
sort(a,a+m);
//if(m==n){cout<<a[m-1]-a[0]<<endl; return 0; }
for(int i=0;i<m-n+1;i++)
{
  mini=min(mini,a[i+n-1]-a[i]);
}
cout<<mini<<endl;
}
