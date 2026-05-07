#include <stdio.h>
int main ()
{
int n, po=0, neg=0, nul=0, num;
  printf ("ingresa SOLO la cantidad de numeros que deseas analizar\n");
scanf ("%d", &n);
int can[n];
for (int c=0; c<n; c++)
{
printf("ingresa el %d valor del arreglo\n", c+1);
scanf ("%d", &can[c]);
if (can[c]>0)
{
po = po + 1;
} 
else if (can[c]<0)
{
neg = neg +1;
  }
else 
{ 
nul = nul + 1;
}
}
printf ("la cantidad de numeros positivos fue: %d\nla cantidad de numeros negativos fue: %d\nla cantidad de numeros nulos fue: %d", po, neg, nul);
return 0;
}

