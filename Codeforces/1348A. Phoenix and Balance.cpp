#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int x[n];
        for(int i=1;i<=n;i++)
        {
            x[i]=pow(2,i);
            //cout<<x[i]<<endl;
        }
        if(n==2)cout<<x[2]-x[1]<<endl;
        else {
                int sum1=0,sum2=0;
                for(int i=1;i<n/2;i++)sum1+=x[i];
                for(int i=n/2;i<n;i++)sum2+=x[i];
                sum1+=x[n];
                //cout<<sum1<<" "<<sum2<<endl;
                cout<<sum1-sum2<<endl;


        }
    }
}
