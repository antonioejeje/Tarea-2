 #include <stdio.h>
  int main ()
  {
float pf, dis, t;
printf ("ingresa el tiempo de estancia y la distancia a recorrer, separadas por un espacio\n");
scanf ("%f %f", &t, &dis);
dis = 2* dis;
if (t>7 && dis>800) 
{
pf=0.23*dis - (0.23*dis)*0.3;
}
else 
{ 
pf = 0.23 * dis;
  }
printf ("el precio final del ticket es %f pesos", pf);
  return 0;
}
