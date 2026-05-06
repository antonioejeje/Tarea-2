#include <stdio.h>
int main ()
{
printf (" SUMA DE NUMEROS PARES DESDE 10 HASTA 50\n");
int c=50, sum=0;
while (c>=10)
{
if (c % 2==0) 
{
sum = sum + c;
  }
c=c-1;
}
printf ("La suma fue: %d", sum);
return 0;
}
