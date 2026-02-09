
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin>>tc;
    while(tc--)

    {
        cin>>n;
        int a[n],even=0,odd=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)even++;
            else odd++;
        }
        int count=0;
        if((n%2!=0 && n/2==odd) || (n%2==0 && even==odd) )
        {
            for(int i=0;i<n;i++)
            {
                if(i%2!=a[i]%2)count++;
            }
            int c=count+1;
            c=c/2;
            cout<<c<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}
                          ///Israt Jahan Reshma
