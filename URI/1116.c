#include<stdio.h>
int main()
{
    int N,X,Y,i;
    float result;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
       scanf("%d%d",&X,&Y);
        result=(float)X/Y;
        if(Y==0)
        printf("divisao impossivel\n");
        else
         printf("%.1lf\n",result);
    }
}

