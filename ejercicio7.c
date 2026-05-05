Hacer un diagrama de ujo para calcular el precio de un ticket ida y vuelta
en ferrocarril, conociendo la distancia de ida y el tiempo de estancia.
Tambi ́en se sabe que si el numero de d ́ıas de estancia es mayor a 7 y la
distancias total (ida y vuelta) a recorrer es mayor a 800 km, el ticket tiene
un descuento del 30%. El precio por km es de 0.23.
  #include <stdio.h>
  int main ()
  {
float pf, dis, t;
printf ("ingresa el tiempo de estancia y la distancia a recorrer, separadas por un espacio\n");
scanf ("%f %f", &t, &dis);
if (t>7)
{
if ((2*dis)>800)
{
pf=0.23*dis - (0.23*dis)*0.3;
}
else 
{ 
pf = 0.23 * dis;
  }
}
printf ("el precio final del ticket es %pf$";
  return 0;
}
  
