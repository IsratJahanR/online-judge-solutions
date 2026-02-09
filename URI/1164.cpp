#include<iostream>
using namespace std;
int main()
{
    int N,X,i,sum=0,j=1;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>X;
        for(j=1;j<=X/2;j++)
        {
            if(X%j==0)
            sum=sum+j;
        }
           if(sum==X)
                {
                  cout<<X<<" eh perfeito";

                }

            else
                cout<<X<<" nao eh perfeito";



    }
}
