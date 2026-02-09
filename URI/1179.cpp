#include<iostream>
using namespace std;
int main()
{
    int i,n[15],j=0,k=0;
    for(i=0;i<15;i++)
    {
        cin>>n[i];
    }
    for(i=0;i<15;i++)
    {
        if(n[i]%2==0)
        {
                cout<<"par["<<j<<"] = "<<n[i]<<endl;
                j++;
                if(j>4)
            break;
        }


    }
    for(i=0;i<15;i++)
    {
     if(n[i]%2!=0)
        {

                cout<<"impar["<<k<<"] = "<<n[i]<<endl;
                k++;
                if(k>4)
                    k=0;

        }
    }


}
