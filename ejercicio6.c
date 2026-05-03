#include <stdio.h>
int main()
  { 
int sueldo;
float aum; 
printf ("ingresa tu sueldo actual\n");
scanf ("%d", &sueldo);
if (sueldo<=1000)
{ 
aum= sueldo + (sueldo*0.15);
}
else 
  {
aum =sueldo + (sueldo*0.12);
}
printf ("el sueldo final con el aumento aplicado es: %f", aum);
return 0;
}
