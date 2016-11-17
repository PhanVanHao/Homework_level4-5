int i,n,s,s1=0,s2=1;
main()
{

printf("Day fibonaci :0\t1\t");
for (i=1;i<20;i++)
{
s=s1+s2;
s1=s2;
s2=s;
printf("%d\t",s);
}
}
