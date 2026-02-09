#include<iostream>
using namespace std;
int main()
{
    int X;
    int i;
    while(1)
    {

     cin>>X;
     if(X==0)
     {
         break;
     }
    for(i=1;i<=X;i++)
    {
        if(i<X)
        cout<<i<<" ";
        if(i==X)
            cout<<X;
    }
    cout<<endl;
    }
 return 0;
}
