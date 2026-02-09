#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a,b,x,y,p,i,j,t=0,s=0;
    cin>>n;
    cin>>a>>b>>x>>y;
    //p=abs(a-x);
   // if(p%2==0 && p<=n )
   i=a;
   j=x;
   while(1)
   {
      if(i>n)i=1;
      if(j<1)j=n;
      if(i==j){s++; break;}
      if(i==b || j==y)break;
     // cout<<i<<" "<<j<<endl;
     // t++;
      i++;
      j--;
   }
  // cout<<t<<i<<j<<endl;
  if(s>0) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
