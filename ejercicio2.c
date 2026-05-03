#include <stdio.h>
int main ()
{
  float area, circunferencia;
  float radio, pi= 3.14159265359;
printf("Dame el radio del circulo\n");
  scanf("%f", &radio);
area =  pi * radio * radio;
circunferencia = 2 * pi * radio;
  printf ("area: %f\ncircunferencia: %f", area, circunferencia);
return 0;
  }
