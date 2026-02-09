#include<bits/stdc++.h>
#define lld unsigned long long int
using namespace std;
class A
{
public:
    static char ch;
    A(){cout<<ch;}
};
char A::ch='s';
int main()
{
    lld n;
    cin>>n;
    cout<<"codeforces";
    A obj[n-1];
    return 0;

/*void Print(char ch,lld n)
    {
        cout<<string(n,ch)<<endl;
    }
int main()
{
    lld n,i;
    cin>>n;
    cout<<"codeforces";
    Print('s',n-1);

    cout<<endl;
    return 0;
*/
}
