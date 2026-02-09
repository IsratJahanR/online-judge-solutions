#include<iostream>
using namespace std;
int main()
{
    double A,B,C,i,j,k,temp;
    cin>>A>>B>>C;
    if(A<B)
    {
        temp=A;
        A=B;
        B=temp;
    }if(A<C)
    {
        temp=A;
        A=C;
        C=temp;
    }if(B<C)
    {
        temp=B;
        B=C;
        C=temp;
    }
    i=A*A;
    j=B*B;
    k=C*C;
if(A>=(B+C))
    cout<<"NAO FORMA TRIANGULO"<<endl;
else{
   if(i==j+k)
    cout<<"TRIANGULO RETANGULO"<<endl;
   if(i>j+k)
    cout<<"TRIANGULO OBTUSANGULO"<<endl;
   if(i<j+k)
    cout<<"TRIANGULO ACUTANGULO"<<endl;
   if(A==B&&B==C)
    cout<<"TRIANGULO EQUILATERO"<<endl;
   else if(A==B||B==C||C==A)
    cout<<"TRIANGULO ISOSCELES"<<endl;
}
    return 0;
}
