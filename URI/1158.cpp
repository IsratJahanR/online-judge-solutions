#include<iostream>
using namespace std;
int main()
{
    int X,Y,N,i,j,sum=0;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>X>>Y;
        if(X%2==0){
            X=X+1;
        for(j=0;j<Y;j++)
        {
          sum=sum+X;
          X=X+2;
        }
        cout<<sum<<endl;
    }
    else
        {
        for(j=0;j<Y;j++)
        {
          sum=sum+X;
           X=X+2;
        }
        cout<<sum<<endl;
    }
    sum=0;
    }
    return 0;
}
