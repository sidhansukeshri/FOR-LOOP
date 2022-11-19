//my reg no is RA2211042010032
#include <stdio.h>
int main () 
{
   int i, j;
   for(i = 2; i<1000; i++)
   {
      for(j = 2; j <= (i/j); j++) 
      if(i%j==0) 
      break;
      if(j > (i/j)) printf("%d is prime\n", i);
   }
}
