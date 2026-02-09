#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int t; cin>>t; while(t--){
    int n;
    cin>>n;
    for(int i=n;;i++)
    {
        int sum=0,x=i;
        while(x>0)
        {
            sum+=x%10;
            x=x/10;
        }
        if(sum%4==0){cout<<i<<endl; break;}
   // }
    }
}
