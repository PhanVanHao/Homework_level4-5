main()
{
    int i,s=0,a[100],n;

        printf("Nhap n");
        scanf("%d",&n);
      for (i=0;i<n;i++)

    {
    printf("nhap a[%d]:",i);
    scanf("%d",&a[i]);
    s+=a[i];
    }
    printf("\ns=%d",s);
}
