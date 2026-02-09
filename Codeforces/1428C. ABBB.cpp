#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long long a=0,b=0;
        long long  n=s.size();
        for(long long i=0;i<n;i++)
        {
            if(s[i]=='A')a++;
            else b++;
        }
        if(a==n || n==1)cout<<n<<endl;
        else if(b==n)cout<<b%2<<endl;
        else
        {
          long long ans=0,i;
          int q=0,p=0,rr=0;
          //if(s[0]=='A')q++;
          for( i=0;i<n;i++)
          {
              if(s[i]=='B')
              {
                 if(q>0)q--;
                 else ans++;
              }
              else q++;

          }
          cout<<q+(ans%2)<<endl;
        }
    }
}
