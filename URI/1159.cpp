#include<iostream>
using namespace std;
int main()
{
    int X,i,sum=0;

    while(1){
             cin>>X;
    if(X==0)
        break;
    else{
    if(X%2==0){
    for(i=0;i<5;i++)
    {
        sum=sum+X;
        X=X+2;
    }
    }
    else
    {
        X=X+1;
    for(i=0;i<5;i++)
    {
        sum=sum+X;
        X=X+2;
    }
    }
     cout<<sum<<endl;
    sum=0;
    }

    }

    return 0;
}

