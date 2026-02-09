#include<iostream>
using namespace std;
int main()
{
    string str;
    int n,t;
    cin>>t;
    while(t--){
    cin>>str;
    n=str.length(); //cout<<n<<endl;
    if(n>10)cout<<str[0]<<n-2<<str[n-1]<<endl;
    else cout<<str<<endl;
    }

}
