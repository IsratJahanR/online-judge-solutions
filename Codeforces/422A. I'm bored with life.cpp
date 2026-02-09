#include<bits/stdc++.h>
using namespace std;
long long fun(long long x)

{
  if(x==1)return 1;
  else return x*fun(x-1);
}
int main()
{
    long long a,b,p,q;
    cin>>a>>b;
    p=min(a,b);
    q=fun(p);
    cout<<q<<endl;
}
