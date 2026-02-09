#include<stdio.h>
int main()
{
  int N,X,c=0,o=0,i;
  scanf("%d",&N);
  for(i=0;i<N;i++)
  {
      scanf("%d",&X);

  if(X>=10&&X<=20)
    c++;
  else
    o++;
  }
  printf("%d in\n",c);
  printf("%d out\n",o);
    return 0;
}

