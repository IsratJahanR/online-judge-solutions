#include<stdio.h>
int main()
{
    float i,k=1;
    int j,a,b;
    for(i=0.0;i<2.2;i+=0.2)
    {

      for(j=0;j<3.0;j++)
      {
          if(i>0&&i<1||i>1&&i<2)
        printf("I=%.1lf J=%.1lf\n",i,k);
          else{
            a=i;
            b=k;
            printf("I=%d J=%d\n",a,b);
          }
        k++;
      }
     k-=2.8;
    }
return 0;
}


