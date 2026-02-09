#include<iostream>
using namespace std;
int main()
{
    int A,N,i,sum=0;
    cin>>A;
    ineligible:
    cin>>N;
      if(N<=0)
        goto ineligible;
       else
         {
          for(i=0;i<N;i++)
          {
              sum=sum+A;
              A++;
          }
          cout<<sum<<endl;
      }

}
