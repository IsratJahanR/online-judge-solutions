#include<bits/stdc++.h>
#define pb push_back
using namespace std;
/*int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x[n],mx=0,mn=1001;
        for(int i=0;i<n;i++)cin>>x[i];
        for(int i=0;i<n-1;i++)
        {

               if(x[i]<x[i+1])mx=max(mx,x[i]);
               else mn=min(mn,x[i]);
        }
        if(x[n-2]>x[n-1])mx=max(mx,x[n-1]);
        else mn=min(mn,x[n-1]);
        //cout<<mx<<endl;
        //cout<<mn<<endl;
        int p=abs(mx-mn);
        cout<<p<<endl;


    }
}*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x[n],mn=1001,p;
        for(int i=0;i<n;i++)cin>>x[i];
        sort(x,x+n);
        for(int i=0;i<n-1;i++)
        {
         p= x[i+1]-x[i];
          mn=min(p,mn);

        } cout<<mn<<endl;
    }

}
