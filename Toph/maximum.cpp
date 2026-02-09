#include<iostream>
using namespace std;
int main()
{
    int N[100],n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>N[i];
    }
    int max=N[0];
    for(i=0;i<n;i++)
    {
        if(max<N[i])
            max=N[i];

    }
    cout<<max<<endl;
}
