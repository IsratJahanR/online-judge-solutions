
#include<stdio.h>
int main()
{
    int i;
    float X[100];
    for(i=0;i<10;i++)
    {
        scanf("%f",&X[i]);
    }

    for(i=0;i<10;i++)
    {
        if(X[i]<=10)
            printf("A[%d] = %.1f\n",i,X[i]);
    }
    return 0;
}

