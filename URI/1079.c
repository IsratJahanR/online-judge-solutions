#include<stdio.h>
int main()
{
   int n,i;
   float x,y,z;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%f %f %f",&x,&y,&z);
       float sum = 2*x+3*y+5*z;
       float avg = sum/10;
       printf("%.1lf\n",avg);
   }
   return 0;
}

