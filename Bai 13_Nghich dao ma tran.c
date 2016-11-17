#include <stdio.h>
main()
{
    int a,b,ma[50][50],map[50][50],detA,i,j;
    printf("Ma nhap cap ma tran a x b : ");
    scanf("%d%d",&a,&b);
    if (a!=b) printf ("Ma tran khong kha nghich");
    else
    {
        for (i=1;i<=a;i++)
            for (j=1;j<=b;j++)
        {printf("  a[%d][%d]=",i,j);
        scanf("%d",&ma[i][j]);}


    }
}
