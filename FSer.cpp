#include<stdio.h>
int main()
{
    int x, f=1, t=0, g=0;
    printf("Insert the number of terms to which Fibonacci series is to be displayed\n");
    scanf("%d",&x);
    if (x=1)
{
  printf("%d is the first term of the Fibonacci Series",f);
}
else
{  printf("First %d terms of the Fibonacci Series are:",x);
   for (int i=0; i<x; i++)
   {
   printf("%d\t", f);
   g=f+t;
   t=f;
   f=g;
   }    
}

  return 0;
}

