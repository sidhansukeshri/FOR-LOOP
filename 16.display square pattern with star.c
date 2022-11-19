//my reg no is RA2211042010032
#include <stdio.h>
void main() {
 int rows;
 int columns;
 printf("enter rows and coloumns : ");
 scanf("%d%d",&rows,&columns);
 for(int i=1;i<=rows;i++)
 {
    for(int j=1;j<=columns;j++)
    {
        printf("*\t");
    }
    printf("\n");
 }
}
