#include<iostream>
using namespace std;
int main()
{
    int X,Y,i,temp;
    cin>>X>>Y;
    if(X>Y)
    {
        temp=X;
        X=Y;
        Y=temp;

    }
    X++;
    for(i=X;i<Y;i++)
    {
        if(i%5==2 || i%5==3)
            cout<<i<<endl;
    }
    return 0;
}
