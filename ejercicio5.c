#include <stdio.h>
  int main()
  {
float c;
printf ("ingresa el total de la cuenta\n");
scanf ("%f", &c);
if (c>2500)
{ 
c= c - (c*0.08);
}
printf ("el total a pagar es: %f", c);
return 0;
  }
