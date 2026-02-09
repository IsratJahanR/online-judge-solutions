#include<iostream>
using namespace std;
int main()
{
    int i,j=0,n;
    cin>>n;

      for(i=0;i<10;i++)
    {
        if(j==n)
            j=0;
            cout<<"N["<<i<<"] = "<<j<<endl;
        j++;
    }


}
