#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b[n];
        int s=0,p;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)s++;
        }
        p=n-s;
                    if(s%2!=0)s--;

        if(s>=p)
        {

            cout<<s<<endl;
            for(i=0;i<s;i++)cout<<"1 ";

        }
        else
        {
            cout<<p<<endl;
            for(i=0;i<p;i++)cout<<"0 ";


        }
        cout<<endl;

    }
}
