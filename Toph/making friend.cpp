#include<iostream>
using namespace std;
int main()
{
    int i,c=0;
    long long int n;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    cout<<c<<endl;
}
