#include<iostream>
using namespace std;
int main()
{
    int X,Y;
    while(1)
    {
        cin>>X>>Y;

        if(X>Y)
                cout<<"Decrescente"<<endl;
        if(X<Y)
                cout<<"Crescente"<<endl;
        if(X==Y)
            break;
    }
}
