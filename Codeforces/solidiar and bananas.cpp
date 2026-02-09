#include<iostream>
using namespace std;
int main()
{
    int k,w;
    long long n;
    cin>>k>>n>>w;
    int result=(w*(w+1)/2)*k-n;
    if(result<=0)result=0;
    cout<<result<<endl;
}

