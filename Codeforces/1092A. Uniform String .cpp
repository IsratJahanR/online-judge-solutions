#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t,r,q,m,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        q=n/k;
        r=n%k;
        m=n-r;
        char a='a';
        for(i=0;i<m;i+=k)
        {
            for(int j=0;j<k;j++)
            {
                cout<<a;
                a++;
            }
            a='a';

        }

        for(i=0;i<r;i++){cout<<a; a++; }
        cout<<endl;

    }
}
