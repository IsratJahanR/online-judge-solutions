#include<iostream>
using namespace std;
int main()
{
  int i,X,N;
  long long int fib[60];
  fib[0]=0;
  fib[1]=1;
  for(i=2;i<=60;i++)
  {
      fib[i]=fib[i-1]+fib[i-2];

  }
  cin>>N;
  for(i=0;i<N;i++)
  {
      cin>>X;
      cout<<"Fib("<<X<<") = "<<fib[X]<<endl;
  }

}
