#include<iostream>
using namespace std;
int main()
{
    int X,Y,sum=0,i;
    while(1){
            cin>>X>>Y;
            if(X<=0||Y<=0)
            break;

    if(X>Y)
    {
        for(i=Y;i<=X;i++){
            sum=sum+i;
        cout<<i<<" ";
            }
            cout<<"sum="<<sum<<endl;
        sum=0;
    }
    else{
        for(i=X;i<=Y;i++){
            sum=sum+i;
            cout<<i<<" ";
            }
            cout<<"sum="<<sum<<endl;
            sum=0;
    }
    }
    return 0;
}
