#include<iostream>
using namespace std;
int main()
{
    int X,Z,i,count=1;
    cin>>X;
    while(1)
    {
        cin>>Z;
        if(Z>X)
        {
            for(i=X+1;i<Z;i=i+X+1)
            {
             count++;
            }

            cout<<count<<endl;
        break;
        }


    }
    return 0;
}
