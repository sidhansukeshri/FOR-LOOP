//my reg no is RA2211042010032
#include <stdio.h>
void main()
{
   int i,n,sum=0;
   printf("Input the number of terms : ");
   scanf("%d",&n);
   printf("\nThe square natural upto %d terms are :",n);
   for(i=1;i<=n;i++)
   {
     printf("%d  ",i*i);
     sum+=i*i;
   }
   printf("\nThe Sum of Square Natural Number upto %d terms = %d \n",n,sum);
}
