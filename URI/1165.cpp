#include<iostream>
using namespace std;
int main()
{
    int N,X,i,j,count=0;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>X;
       for(j=2;j<X;j++)
       {
          if(X%j==0){
            count++;
            break;
          }
       }
       if(count==0)
        cout<<X<<" eh primo"<<endl;
        else
        cout<<X<<" nao eh primo"<<endl;
        count=0;
        }

    return 0;

}
