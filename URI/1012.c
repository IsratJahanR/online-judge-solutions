#include<stdio.h>
int main()
{
    float A,B,C;
    double a,b,c,d,e,pi = 3.14159;
    scanf("%f%f%f",&A,&B,&C);
    a = 1.0/2*A*C;
    b = pi*C*C;
    c = 1.0/2*(A+B)*C;
    d = B*B;
    e = A*B;
printf("TRIANGULO: %.3lf\n",a);
printf("CIRCULO: %.3lf\n",b);
printf("TRAPEZIO: %.3lf\n",c);
printf("QUADRADO: %.3lf\n",d);
printf("RETANGULO: %.3lf\n",e);
return 0;
}

