#include<stdio.h>
int main()
{
   int a[45],n,i;
   scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<n;i++)
    {
        if(i==(n-1))
            printf("%d\n",a[i]);
        else
       printf("%d ",a[i]);
    }
    return 0;
}


