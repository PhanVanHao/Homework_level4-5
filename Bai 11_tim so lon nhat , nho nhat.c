#include <stdio.h>
main()
{
    int a[50],n,j,i;
    printf("Nhap so phan tu mang  : ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Nhap phan tu a[%d]=",i+1);
        scanf("%d",&a[i]);
    }
    for (i=0;i<=n-1;i++)
        for (j=0;j<=n-1;j++)
    {
        if (a[j]>a[i])
        {
            a[i]=a[i]+a[j];
            a[j]=a[i]-a[j];
            a[i]=a[i]-a[j];
        }
    }
    printf("So nho nhat la : %d \nSo lon nhat la : %d ",a[0],a[n-1]);
}
