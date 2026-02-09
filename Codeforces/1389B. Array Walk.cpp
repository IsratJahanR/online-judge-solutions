/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,z,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>z;
        long long a[n],i,s;
        for(i=0;i<n;i++)cin>>a[i];
        s=a[0];
        if(z==0 || z==k || z>k/2){
        for(i=1;i<=k;i++)
        {
         s=s+a[i];
        }
        cout<<s<<endl;
        }
        else
        {
           for(i=1;i<k;i++)s+=a[i];


        }
        cout<<s<<endl;

        }

    }

}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=0 ; cin>>t;
    while(t--)
    {
        int a,b,sum=0;
        cin>>a>>b;
        j++;
        if(a%2==0)a++;
        for(int i=a;i<=b;i+=2)sum+=i;
        cout<<"Case "<<j<<": "<<sum<<endl;
    }
}
