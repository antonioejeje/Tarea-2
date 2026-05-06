  #include <stdio.h>
  int main ()
{
int num, r;
printf ("Ingresa el numero de la tabla de multiplicar que quieres saber\n");
scanf ("%d", &num);
for (int c=1; c<=10;  c++)
{ 
r = num * c;
printf("%d x %d = %d\n", num, c, r);
}
return 0;
}
