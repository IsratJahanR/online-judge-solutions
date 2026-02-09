#include<stdio.h>
int main()
{
    int N,result1,result2=1,i;
   scanf("%d",&N);
    if(N==0){
        result1=1;
        printf("%d\n",result1);
    }
    else
    {
        for(i=1;i<=N;i++)
            result2 = result2*i;
       printf("%d\n",result2);
    }

}

