#include <stdio.h>
main()
{
    int i,j;
    for (i=1;i<=5;i++)
    {printf("%d ",i);
        for (j=1;j<=4;j++)
        {printf("%d ",j*5+i); if(j==4) printf("\n");}
    }

}

