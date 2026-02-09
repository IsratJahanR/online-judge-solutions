#include<stdio.h>
int main()
{
    int i,j,X,Y;
    scanf("%d%d",&X,&Y);
    j=0;
    for(i=1;i<=Y;i++)
    {

            printf("%d",i);
            j++;
            if(j==X){
                printf("\n");
                j=0;
            }
            else
                printf(" ");

    }
    return 0;
}

