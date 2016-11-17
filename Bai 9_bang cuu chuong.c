#include <stdio.h>
main()
{
    int i,j;
    for (i=1;i<=10;i++)
    for (j=1;j<=10;j++)
    {printf("%d * %d = %d\t",j,i,i*j);if(j==10) printf("\n");}
}
