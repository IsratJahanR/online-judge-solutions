#include<iostream>
using namespace std;
int fact(int x)
{
    if(x==0)
        return 1;
    else
        return x*fact(x-1);
}
int main()
{
    int M,N,i;
    int n,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>M>>N;
        sum=fact(M)+fact(N);
        cout<<sum;
    }
}
