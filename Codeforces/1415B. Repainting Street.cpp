#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll m,n,c,r,t,ans,k;
    cin>>t;
    while(t--)
    {
       cin>>n>>k;
       ans=n;
       int a[n];
       int b[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           //s.insert(a[i]);
           b[i]=a[i];
       }
       if(n==1)ans=0;

       else
       {
       sort(b,b+n);
       vector<int > bb;
       for(int i=0;i<n-1;i++)
       {
           if(b[i]!=b[i+1])bb.push_back(b[i]);
       }
       bb.push_back(b[n-1]);
     // for(int i=0;i<bb.size();i++)cout<<bb[i]<<" ";
         for(int i=0;i<bb.size();i++)
         {
             int l=0;
             c=0;
             for(int j=0;j<n;j++)
             {
                if(bb[i]!=a[j])
                {
                    l++;
                    if(l==k)c++,l=0;
                }
                else if(l>0)
                {
                    l++;
                    if(l==k)
                    {
                        c++;
                        l=0;
                    }
                    //l=0;
                }

             }
             if(l>0)c++;

             ans=min(ans,c);
         }
       }
       cout<<ans<<endl;
    }


}
