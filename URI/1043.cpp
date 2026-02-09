#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float A,B,C,Area,Perimetro;
    cin>>A>>B>>C;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(1);
    if(A+B<=C||B+C<=A||C+A<=B){
            Area = (A+B)/2*C;
        cout<<"Area = "<<Area<<endl;

    }
    else{
        Perimetro = A+B+C;
        cout<<"Perimetro = "<<Perimetro<<endl;


}
}
