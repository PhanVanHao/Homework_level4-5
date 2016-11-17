void main()
{
int a[50],i,n,max,min;
printf("Nhap n");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
    printf("Nhap a[%d]",i);
    scanf("%d",&a[i]);
}
max=-99999;
min=a[0];
for (i=1;i<=n;i++)
{
    if (a[i]>max) max=a[i];
    if (a[i]<min) min=a[i];
}
printf("max=%d \tMin =%d",max,min);
}

