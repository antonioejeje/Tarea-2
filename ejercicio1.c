#include <stdio.h>
int main ()
{
  int sum, rest, mult;
  int num1, num2; 
  printf ("Dame dos numeros cualquiera separados por un espacio\n");
  scanf ("%d %d", &num1, &num2);
  sum= (num1+num2);
  rest=(num1-num2);
  mult= (num1 *num2);
  printf ( "%d, %d, %d", sum, rest, mult);
    return 0;
  
}
