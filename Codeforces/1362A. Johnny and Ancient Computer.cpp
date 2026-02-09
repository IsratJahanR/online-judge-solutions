#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,temp,sum=0;
        cin>>a>>b;
        if(a==b){cout<< 0 <<endl; }
        else{
        if(a<b)swap(a,b);

            if(a%b==0)
            {
                temp=a/b;
                        while(temp%8==0)
                        {
                            temp=temp/8;
                            sum++;
                        }while(temp%4==0)
                        {
                            temp=temp/4;
                            sum++;
                        }while(temp%2==0)
                        {
                            temp=temp/2;
                            sum++;
                        }

                        if(temp==1)cout<<sum<<endl;
                        else cout<<"-1"<<endl;

            }
            else cout<<"-1"<<endl;
        }


    }

}
