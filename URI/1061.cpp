#include<iostream>
using namespace std;
int main()
{
    int d1,h1,m1,s1,d2,h2,m2,s2;
    string lixo;
    //cout<<"Dia ";
    cin>>lixo>>d1;
    cin>>h1>>lixo>>m1>>lixo>>s1;
    //cout<<"Dia ";
    cin>>lixo>>d2;
    cin>>h2>>lixo>>m2>>lixo>>s2;
    int x=(86400*d2+3600*h2+60*m2+s2)-(86400*d1+3600*h1+60*m1+s1);
    int D=x/86000;
    x=x%86400;
    int H=x/3600;
    x=x%3600;
    int M=x/60;
    int S=x%60;
    cout<<D<<" dia(s)"<<endl;
    cout<<H<<" hora(s)"<<endl;
    cout<<M<<" minuto(s)"<<endl;
    cout<<S<<" segundo(s)"<<endl;
}
