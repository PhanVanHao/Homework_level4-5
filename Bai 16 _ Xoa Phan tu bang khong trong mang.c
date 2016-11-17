
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
for (i=1;i<=n;i++){
    if (a[i]==0) {m--;
    for (j=i;j<=n;j++)
        a[j]=a[j+1]; i--;
    }}
    for(i=1;i<=m;i++)
        printf("\t%d ",a[i]);
}

