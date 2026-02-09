#include<iostream>
using namespace std;
int main()
{
    int i,j,X,Y;
    cin>>X>>Y;
    j=0;
    for(i=1;i<=Y;i++)
    {

              cout<<i;
            j++;
            if(j==X){
                cout<<endl;
                j=0;
            }
            else
                cout<<" ";

    }
    return 0;
}
