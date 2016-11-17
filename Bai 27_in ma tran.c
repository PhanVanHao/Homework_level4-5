#include <stdio.h>
main()
{
    int i;
    for (i=1;i<=25;i++)
    {
        printf("%d ",i);
        if (i%5==0) printf("\n");
    }
}
