#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t; while(t--)
    {
        ll a,n,r,p;
        cin>>a>>n;
        p=a;
        n--;
        while(n--)
        {
            int q=0;
            int max=-1,min=11;
            while(a>0)
            {
                r=a%10;
                a=a/10;
                if(r>max)max=r;
                if(r<min)min=r;
                if(r==0)q=1;
            }
            p=p+max*min;
            a=p;
            if(q==1)break;

        }
        cout<<p<<endl;
    }

}
