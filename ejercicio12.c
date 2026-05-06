#include <stdio.h>
int main ()
{
int mult=1, c, n;
  printf ("Hasta qué numero deseas la multiplicacion de naturales\n");
scanf ("%d", &c);
while (c>=1)
{
mult = mult * c;
  c=c-1;
  }
printf ("la multiplicacion final es: %d\n", mult);
return 0;
}
