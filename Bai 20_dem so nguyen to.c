#include <stdio.h>
main()
{
  int i,j,k=0,n;
  printf("Nhap n : ");
  scanf("%d",&n);
  printf("\nCac so nguyen to  la : ");
  for (i=1;i<=n;i++)
  {
      for (j=1;j<=i;j++)
          if ((i%j)==0) k++;
          if (k<=2) printf("%d ",i);
          k=0;
  }
}

