main()
{
    int n,i,a[50];
    printf("Nhap n :\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Nhap a[i]");
        scanf("%d",&a[i]);

    }
    printf("So chan : ");
    for(i=0;i<n;i++)
    {
        if (a[i]%2==0) printf("%d\t",a[i]);
    }
    printf("\nSo le : ");
    for(i=0;i<n;i++)
    {
        if (a[i]%2!=0) printf("%d\t",a[i]);
    }
    }
