#include <stdio.h>
int main ()
{
  int num, p=0, neg=0, n=0;
for (int c=1; c<=100; c++)
{
  printf ("dame el numero %d\n", c);
scanf ("%d", &num);
if (num>0) 
{  
p = p + 1;
}
else if (num<0)
{
neg = neg + 1;
}
if (num==0)
{ 
n = n + 1;
}
}
  printf ("la cantidad de nmeros positivos fue: %d\nla cantidad de numeros negativos fue: %d\nla cantidad de numeros nulos fue: %d", p, neg, n);
  return 0;
}
