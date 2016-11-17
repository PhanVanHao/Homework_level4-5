#include <stdio.h>
main()
{
    int a[50],a1[50],a2[50],n,i,i1=0,i2=0;
    printf("Nhap so phan tu mang  : ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Nhap phan tu a[%d]=",i+1);
        scanf("%d",&a[i]);
        if (a[i]<0) {a1[i1]=a[i];i1++;} // gan va tim so bien mang a1
        else {a2[i2]=a[i];i2++;} // gan va tim so bien mang a2 :))
    }
        printf("Day so am la : ");
        for (i=0;i<i1;i++)
            printf("%d ",a1[i]);
        printf("\nDay so duong la : ");
        for (i=0;i<i2;i++)
            printf("%d ",a2[i]);
        return(0);
}
