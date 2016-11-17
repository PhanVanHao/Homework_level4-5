
void main()
{
int a[50],i,n,m,j;

printf("Nhap n : ");
scanf("%d",&n);
m=n;
for (i=1;i<=n;i++)
{
    printf("Nhap a[%d]",i);
    scanf("%d",&a[i]);
    }
for (i=1;i<=n;i++){ //Loai bo phan tu am
    if (a[i]<0) {m--;
    for (j=i;j<=n;j++)
        a[j]=a[j+1]; i--;
    }}
    for(i=1;i<=m;i++) //Sap xep tu be den lon
        for (j=1;j<=m;j++)
            {
        if (a[j]>a[i])
        {
            a[i]=a[i]+a[j];
            a[j]=a[i]-a[j];
            a[i]=a[i]-a[j];
        }
    }
    for(i=1;i<=m;i++)       //in ra man hinh
        printf("\t%d ",a[i]);
}


