#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    float A,B,C,X,R1,R2;
    cin>>A>>B>>C;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(5);
    X=B*B-4*A*C;
    if(A==0||X<0)
        cout<<"Impossivel calcular"<<endl;
    else
    {
        R1=(-B+sqrt(X))/(2*A);
        R2=(-B-sqrt(X))/(2*A);
        cout<<"R1 = "<<R1<<endl;
        cout<<"R2 = "<<R2<<endl;

    }
}
