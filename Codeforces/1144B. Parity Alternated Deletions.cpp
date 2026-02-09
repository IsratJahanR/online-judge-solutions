#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s1=0,s2=0,k,q,an;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)s1++;
        else s2++;
    }
    int ans=abs(s1-s2);
    if(ans==0 || ans==1)cout<<0<<endl;
    else
    {
        sort(a,a+n);
        if(s1>s2)
        {
            k=s1-s2-1;
            q=0;
            an=0;
            for(int i=0;i<n;i++)
            {
                if(q==k)break;
                if(a[i]%2==0){an+=a[i];q++;}
            }
        }
        else
        {
            k=s2-s1-1;
            q=0;
            an=0;
            for(int i=0;i<n;i++)
            {
                if(q==k)break;
                if(a[i]%2==1){an+=a[i];q++;}
            }

        }
        cout<<an<<endl;
    }
}
