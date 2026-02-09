#include<iostream>
#include<bits/stdc++.h>
#include<time.h>
using namespace std;
int main()
{
    int t;
    long long n,i,j;
    int c=0;
     cin>>t;
     while(t--){
         cin>>n;
         for(i=2;i<n;i++)
            {
                if(n%i==0)
                {
                c++;
                break;
                }
            }
            if(c==0)
               printf("Prime\n");
            else
                printf("Not Prime\n");
c=0;

    }
    return 0;

}
