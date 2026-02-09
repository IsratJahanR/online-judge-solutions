#include<stdio.h>
int main()
{
    float selary,x,y;
    scanf("%f",&selary);
    if(selary>=0&&selary<=400.00)
    {
        x = selary+(selary*15)/100;
        y = x-selary;
        printf("Novo salario: %.2lf\n",x);
        printf("Reajuste ganho: %.2lf\n",y);
        printf("Em percentual: 15%%\n");
    }
    if(selary>=400.01&&selary<=800.00)
    {
        x = selary+(selary*12)/100;
        y = x-selary;
        printf("Novo salario: %.2lf\n",x);
        printf("Reajuste ganho: %.2lf\n",y);
        printf("Em percentual: 12 %%\n");
    }
    if(selary>=800.01&&selary<=1200.00)
    {
        x = selary+(selary*10)/100;
        y = x-selary;
        printf("Novo salario: %.2lf\n",x);
        printf("Reajuste ganho: %.2lf\n",y);
        printf("Em percentual: 10 %%\n");
    }
    if(selary>=1200.01&&selary<=2000.00)
    {
        x = selary+(selary*7)/100;
        y = x-selary;
        printf("Novo salario: %.2lf\n",x);
        printf("Reajuste ganho: %.2lf\n",y);
        printf("Em percentual: 7 %%\n");
    }
    if(selary>2000.00)
    {
        x = selary+(selary*4)/100;
        y = x-selary;
        printf("Novo salario: %.2lf\n",x);
        printf("Reajuste ganho: %.2lf\n",y);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}





