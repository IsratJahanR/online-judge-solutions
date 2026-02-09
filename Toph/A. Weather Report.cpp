#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=70)cout<<"Bad weather."<<endl;
    if(n<=30)cout<<"Good weather."<<endl;
    if(n>30&&n<70)cout<<"\""<<"Confusing weather."<<"\""<<endl;
    return 0;

}
