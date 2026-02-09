#include<bits/stdc++.h>
#define      in(x)        scanf("%lld",&x)
#define      out(x)       printf("%lld\n",x)
#define      cy           printf("YES\n")
#define      cn           printf("NO\n")
using namespace std;
int main()
{
    long long t,r,g,b,w;
    cin>>t;
    while(t--)
    {
     int a[4],o=0,e=0,c=0;
     for(int i=0;i<4;i++)
     {
         cin>>a[i];
         if(a[i]%2==0)e++;
         else o++;
         if(i<3 && a[i]>0)c++;

     }
     if(e>=3 || o==4  || (o==3 && c==3 )  )cy;
     else cn;
    }
}
