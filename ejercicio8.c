 #include <stdio.h>
int main ()
{
  int num1, num2, r;
printf("Ingresa dos numeros en forma de lista\n");
scanf ("%d\n%d", &num1, &num2);
r = num2 % num1;
if (r==0)
{
printf (" %d es divisor de %d", num1, num2);
} 
else 
{
printf (" %d no es divisor de %d", num1, num2);
} 
  return 0;
}
