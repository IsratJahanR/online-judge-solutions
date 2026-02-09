#include<iostream>
using namespace std;
int main()
{
    int N,result1,result2=1,i;
    cin>>N;
    if(N==0){
        result1=1;
        cout<<result1<<endl;
    }
    else
    {
        for(i=1;i<=N;i++)
            result2 = result2*i;
        cout<<result2<<endl;
    }

}
