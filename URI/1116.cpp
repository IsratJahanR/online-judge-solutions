#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int N,X,Y,i;
    float result;
    cin>>N;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(1);
    for(i=0;i<N;i++)
    {
        cin>>X>>Y;
        result=(float)X/Y;
        if(Y==0)
         cout<<"divisao impossivel"<<endl;
        else
         cout<<result<<endl;
    }
}
