#include<stdio.h>
int main()
{
    int A,N,i,sum=0;
    scanf("%d",&A);
    ineligible:
    scanf("%d",&N);
      if(N<=0)
        goto ineligible;
       else
         {
          for(i=0;i<N;i++)
          {
              sum=sum+A;
              A++;
          }
          printf("%d\n",sum);
      }

}

