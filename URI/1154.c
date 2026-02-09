#include<stdio.h>
int main()
{
    int X,sum=0;
    float i=0;
    while(1)
    {
        scanf("%d",&X);
        if(X<0)
        break;
        else
            {

            sum=sum+X;
            i++;
        }

    }
    float avg=sum/i;
    printf("%.2lf\n",avg);
}
