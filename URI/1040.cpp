#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,d,x,media,fmedia;
    cin>>a>>b>>c>>d;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(1);
    media = (2*a+3*b+4*c+d)/10;
    cout<<"Media: "<<media<<endl;
    if(media>=7.0)
        cout<<"Aluno aprovado."<<endl;
    else if(media<5.0)
        cout<<"Aluno reprovado."<<endl;
    else
        {
        cout<<"Aluno em exame."<<endl;
        cin>>x;
        cout<<"Nota do exame: "<<x<<endl;
        fmedia = (media+x)/2;
        if(fmedia>=5.0)
            cout<<"Aluno aprovado."<<endl;
        else
            cout<<"Aluno reprovado."<<endl;
        cout<<"Media final: "<<fmedia<<endl;
    }
    return 0;
}
