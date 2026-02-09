#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0;
    cin>>n;
for(i=2;i<=n/2;i++)    {
       if(n%i==0&&n%2==0)
          c++;
    }
    if(c>0)
       cout<<"Yes"<<endl;
       else
        cout<<"No"<<endl;
}
