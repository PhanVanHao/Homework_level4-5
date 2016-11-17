#include <stdio.h>
main()
{
    int n,i;
    float tong=0;
    printf("Nhap n : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        tong+=(1/(float)i);
    printf("\nTong la : %f ",tong);

}
