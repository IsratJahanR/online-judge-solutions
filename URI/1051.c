#include<stdio.h>

int main()
{
    float x,y;
    scanf("%lf",&x);
    if(x>=0&&x<=2000.00)
        printf("Isento\n");
   if(x>=2000.01&&x<=3000.00)
    {
        y=(x-2000)*8/100;
        printf("R$ %.2lf\n",y);
    }
   if(x>=3000.01&&x<=4500.00)
    {
        y=1000*8/100 + (x-3000)*18/100;
        printf("R$ %.2lf\n",y);
    }
    if(x>4500.00)
    {
        y = 1000*8/100.00 + 1500*18/100.00 + (x-4500)*28/100;
        printf("R$ %.2lf\n",y);
    }

}
