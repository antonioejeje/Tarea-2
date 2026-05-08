#include <stdio.h>
int main ()
{
int arr[100], c=1, n=0;
do {
if (c % 2 == 0)
{
arr [n] = c;
 n++;
  c++;
}
else {
c++;
}
}
    while (n<100);
 n=0;
while (n<100)
{ 
printf ("%d,", arr[n]);
n++;
}
return 0;
}

