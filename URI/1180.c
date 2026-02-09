#include<stdio.h>
int main()
{
    int i,n,x[1000],p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&x[i]);
    }
    int temp=x[0];
    for(i=1;i<n;i++)
    {
        if(temp>x[i])
        {
            temp=x[i];
            p=i;
        }

    }
   printf("Menor valor: %d\n",temp);
   printf("Posicao: %d\n",p);
}
