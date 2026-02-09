#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    float S=0,j=1.0;
    cout<<showpoint;
    cout<<setprecision(2);
    cout<<fixed;
  for(i=1;i<=39;i+=2)
    {
        S=S+(i/j);
        j=(j+j);
    }
    cout<<S<<endl;
return 0;
}
