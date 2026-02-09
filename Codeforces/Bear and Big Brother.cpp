#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i=1;
    cin>>a>>b;
    while(a<=b)
    {
        a=3*a;
        b=2*b;
        if(a>b){
            cout<<i<<endl;
            //break;
        }
        i++;

    }
}
