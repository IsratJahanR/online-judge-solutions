#include<stdio.h>
int main()
{
    float A,B,C,Area,Perimetro;
    scanf("%f%f%f",&A,&B,&C);
    if(A+B<=C||B+C<=A||C+A<=B){
            Area = (A+B)/2*C;
            printf("Area = %.1lf\n",Area);


    }
    else{
        Perimetro = A+B+C;
        printf("Perimetro = %.1lf\n",Perimetro);

        }
        return 0;
}

