//my reg no is RA2211042010032
#include<stdio.h>  
void main()  
{
    int n,n1=0,n2=1,n3;
    printf("fibonacci series till : ");
    scanf("%d",&n);
    printf("%d",n1);
    for (int i=2;i<n;i++)
    {
      n3 =n1+n2;
      printf(" %d",n3);
      n1=n2;
      n2=n3;
    }
}
