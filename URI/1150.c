#include<stdio.h>
int main()
{
    int X,Z,i,count=1;
        scanf("%d",&X);
    while(1)
    {
        scanf("%d",&Z);
        if(Z>X)
        {
            for(i=X+1;i<Z;i=i+X+1)
            {
             count++;
            }

            printf("%d\n",count);
        break;
        }


    }
    return 0;
}

