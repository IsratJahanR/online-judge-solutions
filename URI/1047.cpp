#include<iostream>
using namespace std;
int main()
{
    int a1,b1,a2,b2,x,y,z;
    cin>>a1>>b1>>a2>>b2;

       x= (60*a2+b2)-(60*a1+b1);
       if (x<=0){ x=x+24*60;}

       y=x/60;
       z=x%60;
       cout<<"O JOGO DUROU "<<y<<" HORA(S) E "<<z<<" MINUTO(S)"<<endl;



}
