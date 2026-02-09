#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    int n,t;

    cin>>t;
    while(t--){
         int i=1;
         vector <int> sum;
         cin>>n;
         while(n!=0)
         {
             if(n%10!=0)sum.pb((n%10)*i);
             n=n/10;
             i=i*10;

         }
         cout<<sum.size()<<endl;
         for(int j=0;j<sum.size();j++)cout<<sum[j]<<" ";
         cout<<endl;
    }
}
