#include<bits/stdc++.h>
using namespace std;
//long long show(long long n){
  //  long long x,i,sum=0;
//cout<<sum<<endl;
    //else return n=n-x;
//}
int main()
{
    long long n,x,i,sum=0;
    cin>>n;
    while(1)
    {
                  for(i=1;i<=n;i=i*2)
                     {
                     x=i;
                     }
    sum++;
    if(x==n){cout<<sum<<endl; break;}
    else n=n-x;
    }
    //show(n);

}
