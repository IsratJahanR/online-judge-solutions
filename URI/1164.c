
#include<stdio.h>
int main()
{
    int N,X,i,sum,j=1;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {   sum=0;
    scanf("%d",&X);
        for(j=1;j<=X/2;j++)
        {
            if(X%j==0)
            sum=sum+j;
        }
           if(sum==X)
                {
                printf("%d eh perfeito\n",X);
                }

            else
                printf("%d nao eh perfeito\n",X);



    }
}

