#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float selary,x,y;
    cin>>selary;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);
    if(selary>=0&&selary<=400.00)
    {
        x = selary+(selary*15)/100;
        y = x-selary;
       cout<<"Novo salario: "<<x<<endl;
       cout<<"Reajuste ganho: "<<y<<endl;
       cout<<"Em percentual: 15%"<<endl;
    }
    if(selary>=400.01&&selary<=800.00)
    {
        x = selary+(selary*12)/100;
        y = x-selary;
       cout<<"Novo salario: "<<x<<endl;
       cout<<"Reajuste ganho: "<<y<<endl;
       cout<<"Em percentual: 12%"<<endl;
    }
    if(selary>=800.01&&selary<=1200.00)
    {
        x = selary+(selary*10)/100;
        y = x-selary;
       cout<<"Novo salario: "<<x<<endl;
       cout<<"Reajuste ganho: "<<y<<endl;
       cout<<"Em percentual: 10%"<<endl;
    }
    if(selary>=1200.01&&selary<=2000.00)
    {
        x = selary+(selary*7)/100;
        y = x-selary;
        cout<<"Novo salario: "<<x<<endl;
       cout<<"Reajuste ganho: "<<y<<endl;
       cout<<"Em percentual: 7%"<<endl;
    }
    if(selary>2000.00)
    {
        x = selary+(selary*4)/100;
        y = x-selary;
        cout<<"Novo salario: "<<x<<endl;
       cout<<"Reajuste ganho: "<<y<<endl;
       cout<<"Em percentual: 4%"<<endl;
    }
    return 0;
}

