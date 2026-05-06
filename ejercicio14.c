#include <stdio.h>
int main ()
{
int n, num, sum=0;
printf ("ingresa la cantidad de valores que se registrarán\n");
scanf ("%d", &n);
int arr[n];
for (int c=0; c<n; c++)
{ 
  printf ("ingresa el valor %d: ", c +1); 
scanf ("%d", &arr[c]);
}
printf ("ingresa un numero entero\n");
scanf ("%d", &num);
  for (int c=0; c<n; c++)
    {
    if (num == arr[c])
    { 
    sum = sum + 1;
    }
    }
printf ("la cantidad de veces que aparece el numero en el arreglo es: %d", sum);
    
  return 0;
}

  



