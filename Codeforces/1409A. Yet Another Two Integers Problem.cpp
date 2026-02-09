///Israt Jahan Reshma

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,tc,q,x;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b;
        if(a==b)cout<<0<<endl;
     else if(b>a)
       {
           q=b-a;
           x=q%10;
           q=q/10;
           if(x>0)q++;
           cout<<q<<endl;
       }
       else
       {
           q=a-b;
           x=q%10;
           q=q/10;
           if(x>0)q++;
           cout<<q<<endl;
       }
    }

}
