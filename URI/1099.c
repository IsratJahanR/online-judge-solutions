#include<stdio.h>
int main()
{
    int i,n,X,Y,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&X,&Y);
        if(X<Y){
      for(j=X+1;j<Y;j++)
        {
          if(j%2==1)
          sum=sum+j;
        }
       printf("%d\n",sum);
    }
    else
        {
      for(j=Y+1;j<X;j++)
        {
          if(j%2==1)
          sum=sum+j;
        }
       printf("%d\n",sum);
    }
    sum=0;
    }
    return 0;
}


