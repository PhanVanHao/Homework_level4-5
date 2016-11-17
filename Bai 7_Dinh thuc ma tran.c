int main()
{
    int lv;
    printf("Nhap cap ma tran : 2 or 3 or 4 ?");
    scanf("%d",&lv);
    if (lv==2) cap2();
    if (lv==3) cap3();
    if (lv==4) cap4();

}
void cap2()
{
    int a[3][3],i,j;
    for (i=1;i<=2;i++)
     for(j=1;j<=2;j++)  { printf("Nhap phan tu a[%d][%d]",i,j);
                            scanf("%d",&a[i][j]);}
printf("\ndetA=%d",a[1][1]*a[2][2]-a[1][2]*a[2][1]);
}
void cap3()
{
    int a[4][4],i,j,detA;
    for (i=1;i<=3;i++)
        for(j=1;j<=3;j++)  { printf("Nhap phan tu a[%d][%d]",i,j);
                            scanf("%d",&a[i][j]);}
detA=a[1][1]*a[2][2]*a[3][3]+a[1][2]*a[2][3]*a[3][1]+a[1][3]*a[2][1]*a[3][2]-a[1][3]*a[2][2]*a[3][1]-a[1][2]*a[2][1]*a[3][3]-a[1][1]*a[2][3]*a[3][2];
printf("\ndetA=%d",detA);
}
void cap4(){
    int a[5][5],i,j,detA1,detA2,detA3,detA,detA4;
    for (i=1;i<=4;i++)
    for(j=1;j<=4;j++)  { printf("Nhap phan tu a[%d][%d]",i,j);
                            scanf("%d",&a[i][j]);}
detA1=a[1][1]*a[2][2]*a[3][3]*a[4][4]+a[1][2]*a[2][3]*a[3][4]*a[4][1];
detA2=a[1][3]*a[2][4]*a[3][1]*a[4][2]+a[1][4]*a[2][1]*a[3][2]*a[4][3];
detA3=-a[1][4]*a[2][3]*a[3][2]*a[4][1]-a[1][3]*a[2][2]*a[3][1]*a[4][4];
detA4=-a[1][2]*a[2][1]*a[3][4]*a[4][3]-a[1][1]*a[2][4]*a[3][3]*a[4][2];
detA=detA1+detA2+detA3+detA4;
printf("\ndetA=%d",detA);
}
