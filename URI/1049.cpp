
#include<iostream>
using namespace std;
int main()
{
    char a[15],b[15],c[15];
    cin>>a;
    cin>>b;
    cin>>c;
    if(a[0]=='v')
        {
        if(b[0]=='a')
           {
            if(c[0]=='c')
               cout<<"aguia"<<endl;
            else
                cout<<"pomba"<<endl;
           }
        else
           {
            if(c[0]=='o')
               cout<<"homem"<<endl;
            else
                cout<<"vaca"<<endl;
           }
        }
    else
        {
        if(b[0]=='i')
           {
            if(c[2]=='m')
               cout<<"pulga"<<endl;
            else
                cout<<"lagarta"<<endl;
           }
        else
           {
            if(c[0]=='h')
               cout<<"sanguessuga"<<endl;
            else
                cout<<"minhoca"<<endl;
           }
        }
}
