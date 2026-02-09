#include<iostream>
using namespace std;
int main()
{
    float i,j,k=1;
    for(i=0;i<2.2;i+=0.2)
    {

      for(j=0;j<3;j++)
      {
        cout<<"I="<<i<<" "<<"J="<<k<<endl;
        k++;
      }
     k-=2.8;
    }
return 0;
}

