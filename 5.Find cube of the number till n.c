//my reg no is RA2211042010032
#include <stdio.h>
void main()
 {
    int i,n;
    printf("Input number of terms : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
	 printf("Number is : %d and cube of the %d is :%d \n",i,i, (i*i*i));     
    }
 }
