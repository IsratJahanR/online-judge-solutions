/**   ifn=1, then his feeling is "I hate it" or
      if n=2 it's "I hate that I love it", and
      if n=3 it's "I hate that I love that I hate it**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            if(i<n)cout<<"I love that ";
            else cout<<"I love it"<<endl;
        }else
        {
            if(i<n)cout<<"I hate that ";
            else cout<<"I hate it"<<endl;
        }
    }
}
