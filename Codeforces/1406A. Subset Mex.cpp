
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t; while(t--)
    {
        int n,i,s=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int l=0;
        int m=0;
            for(i=0;i<=a[n-1]+1;i++)
            {
                int d=0;
                for(int j=0;j<n;j++)
                {
                  if(a[j]==i)d++;

                }
                if(d==1){l=i;break;}

            }
            for(i=0;i<=a[n-1]+1;i++)
            {
                int k=0;
              for(int j=0;j<n;j++)
                {
                  if(a[j]==i){k++; break;}
                }
                if(k==0){m=i; break;}
            }
            if(m<l)cout<<m*2<<endl;
            else cout<<l+m<<endl;

    }
}
