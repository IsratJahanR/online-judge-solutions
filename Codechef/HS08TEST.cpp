#include<bits/stdc++.h>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main()
{
    int x;
    float y,p;
    cin>>x>>y;
    p=x+0.5;

    if(x%5!=0 || p>y)printf("%.2f",y);
    else printf("%.2f",y-p);
}
