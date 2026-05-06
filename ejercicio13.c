  #include <stdio.h>
  int main ()
  {
int n, sum=0;
printf ("SUMA DE ENTEROS\ningresa el numero de enteros que deseas sumar\n");
scanf ("%d", &n);
int arr [n];
for (int c=0; c<n; c++)
  {
printf ("ingresa el valor %d\n", c+1);
scanf ("%d", &arr [c]);
    sum = sum + arr [c];
  }
  printf ("la suma es: %d", sum);
return 0;
}
