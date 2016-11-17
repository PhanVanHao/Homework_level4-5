#include <stdio.h>
main()
{
    int a1[50],a2[50],n1,n2,n,j,i;
    printf("Nhap so phan tu mang 1 : ");
    scanf("%d",&n1);
    for (i=0;i<n1;i++)
    {
        printf("Nhap phan tu a1[%d]=",i+1);
        scanf("%d",&a1[i]);
    }
    printf("Nhap so phan tu mang 2 : ");
    scanf("%d",&n2);
    for (i=0;i<n2;i++)
    {
        printf("Nhap phan tu a2[%d]=",i+1);
        scanf("%d",&a2[i]);
    }
    for (i=n1;i<=(n1+n2-1);i++)
        a1[i]=a2[i-n1];
    for (i=0;i<=(n1+n2-1);i++)
        for (j=0;j<=(n1+n2-1);j++)
    {
        if (a1[j]>a1[i])
        {
            a1[i]=a1[i]+a1[j];
            a1[j]=a1[i]-a1[j];
            a1[i]=a1[i]-a1[j];
        }
    }
    for (i=0;i<=(n1+n2-1);i++)
        printf("%d ",a1[i]);
}
