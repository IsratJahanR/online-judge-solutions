#include<iostream>
using namespace std;
int main()
{
    int i,j,k=7;
     for(i=1;i<=9;i=i+2)
    {
      for(j=0;j<3;j++)
      {
        cout<<"I="<<i<<" "<<"J="<<k<<endl;
        k--;
      }
     k+=5;
    }
return 0;
}
