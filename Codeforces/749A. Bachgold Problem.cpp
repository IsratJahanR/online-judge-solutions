#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {   n=n/2;
    cout<<n<<endl;
        for(int i=0;i<n;i++)cout<<"2 ";
        cout<<endl;
    }
    else {
        cout<<(n-3)/2+1<<endl;
        cout<<"3 ";
        n=(n-3)/2;
        for(int i=0;i<n;i++)cout<<"2 ";
        cout<<endl;
    }
}
