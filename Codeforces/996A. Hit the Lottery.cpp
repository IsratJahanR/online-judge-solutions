#include<bits/stdc++.h>
using namespace std;
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n,sum=0;
  cin>>n;
  sum+=n/100;
  n=n%100;
  sum+=n/20;
  n=n%20;
  sum+=n/10;
  n=n%10;
  sum+=n/5;
  sum+=n%5;
  cout<<sum<<endl;
}*/
int main()
{
    long long n,sum=0;
    cin>>n;
    int x[5]={100,20,10,5,1};
    for(int i=0;i<5;i++)
    {
        sum+=n/x[i];
        n=n%x[i];

    }
    cout<<sum<<endl;
    return 0;
}

