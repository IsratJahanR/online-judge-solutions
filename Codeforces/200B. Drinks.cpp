#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n];
    double sum=0.0;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        sum+=x[i];
    }
    double avg = sum/n;
    printf("%.11lf",avg);


}
