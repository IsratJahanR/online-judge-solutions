#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        vector <int> x;
        cin>>n;
        if(n%4==0){
          cout<<"YES"<<endl;
          int a=2,b=1,sum1=0,sum2=0;
          for(int i=0;i<n/2;i++)
             {
              x.push_back(a);
              sum1+=a;
              a+=2;
             } //cout<<sum1<<endl;
           for(int i=n/2;i<n;i++)
              {
               if(i==n-1)b=b+n/2;
               x.push_back(b);
               sum2+=b;
               b+=2;
              }
              //cout<<sum2<<endl;
              //if(sum1==sum2)
           for(int j=0;j<n;j++)cout<<x[j]<<" ";

        }
        else cout<<"NO"<<endl;
    }

}
