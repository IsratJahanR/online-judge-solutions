#include<iostream>
using namespace std;
int main()
{
    int i,n,X,Y,j,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>X>>Y;
        if(X<Y){
      for(j=X+1;j<Y;j++)
        {
          if(j%2==1)
          sum=sum+j;
        }
       cout<<sum<<endl;
    }
    else
        {
      for(j=Y+1;j<X;j++)
        {
          if(j%2==1)
          sum=sum+j;
        }
       cout<<sum<<endl;
    }
    sum=0;
    }
    return 0;
}

