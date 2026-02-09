#include<stdio.h>
int main()
{
    int X,Y,i,sum=0;
    scanf("%d",&X);
    scanf("%d",&Y);
    if(X<Y){
            if(X%2!=0)
            {
                X=X+2;
                for(i=X;i<Y;i++){
                if(i%2!=0)
                sum=sum+i;
                          }
            }
            else
                for(i=X;i<Y;i++){
                if(i%2!=0)
                sum=sum+i;
                          }
            }
    if(X>Y){
           if(Y%2!=0)
           {
           Y=Y+2;
           for(i=Y;i<X;i++)
               {
                if(i%2!=0)
                sum=sum+i;
               }
           }
          else
             for(i=Y;i<X;i++)
               {
               if(i%2!=0)
               sum=sum+i;
                }
              }
    printf("%d",sum);
    return 0;
}




