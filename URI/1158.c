#include<stdio.h>
int main()
{
    int X,Y,N,i,j,sum=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d %d",&X,&Y);
        if(X%2==0){
            X=X+1;
        for(j=0;j<Y;j++)
        {
          sum=sum+X;
          X=X+2;
        }
        printf("%d\n",sum);
    }
    else
        {
        for(j=0;j<Y;j++)
        {
          sum=sum+X;
           X=X+2;
        }
        printf("%d\n",sum);
    }
    sum=0;
    }
    return 0;
}

