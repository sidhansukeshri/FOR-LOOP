//my reg no is RA2211042010032
#include<stdio.h>
void main(){
    int i,j,k;
    printf("enter the number of rows : ");
    scanf("%d",&k);
    for (i=1;i<=k;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
