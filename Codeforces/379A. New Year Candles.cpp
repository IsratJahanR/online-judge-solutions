#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c=0;
    for(int i=1;i<=(a+c);i++)
    {
      if(i%b==0)c++;
    }
    cout<<a+c<<endl;
}
