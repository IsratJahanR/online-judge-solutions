#include<stdio.h>
int main()
{
    float a,b,c,d,x;
    double media,fmedia;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    media = (2*a+3*b+4*c+d)/10;
    printf("Media: %.1lf\n",media);

    if(media>=7.0)
         printf("Aluno aprovado.\n");
    else if(media<5.0)
        printf("Aluno reprovado.\n");
    else
        {
       printf("Aluno em exame.\n");
        scanf("%f",&x);
        printf("Nota do exame: \n");
        fmedia = (media+x)/2;
        if(fmedia>=5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",fmedia);
    }
    return 0;
}
