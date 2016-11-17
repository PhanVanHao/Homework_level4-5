#include <stdio.h>
main()
{
  int i,k,n;
  printf("Nhap n,k : ");
  scanf("%d%d",&n,&k);
  printf("\nCac so chia het cho k la : ");
  for (i=1;i<=n;i++)
  {
      if ((k%i)==0) printf("%d,",i);
  }
}

