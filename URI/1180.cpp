#include<iostream>
using namespace std;
int main()
{
    int i,n,x[1000],p;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    int temp=x[0];
    for(i=1;i<n;i++)
    {
        if(temp>x[i])
        {
            temp=x[i];
            p=i;
        }

    }
   cout<<"Menor valor: "<<temp<<endl;
   cout<<"Posicao: "<<p<<endl;
}
