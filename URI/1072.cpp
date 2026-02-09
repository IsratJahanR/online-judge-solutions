#include<iostream>
using namespace std;
int main()
{
  int N,X,c=0,o=0,i;
  cin>>N;
  for(i=0;i<N;i++)
  {
      cin>>X;

  if(X>=10&&X<=20)
    c++;
  else
    o++;
  }
  cout<<c<<" in"<<endl;
  cout<<o<<" out"<<endl;
    return 0;
}
