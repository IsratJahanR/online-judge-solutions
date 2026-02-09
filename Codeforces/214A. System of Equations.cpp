#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
   // int t; cin>>t; while(t--){
    cin>>n>>m;
    int s=0,i,j,a,b;
    for(a=0;a<=sqrt(n);a++)
    {
        for(b=0;b<=sqrt(m);b++)
        {
        if(a+b*b==m && a*a+b==n)s++;
        }
    }

    cout<<s<<endl;
   // }

}
