#include<stdio.h>
int main()
{
    int a1,b1,a2,b2,x,y,z;
    scanf("%d%d%d%d",&a1,&b1,&a2,&b2);

       x= (60*a2+b2)-(60*a1+b1);
       if (x<=0){ x=x+24*60;}

       y=x/60;
       z=x%60;
       print("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",y,z);


}

