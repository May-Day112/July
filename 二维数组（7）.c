#include<stdio.h>
int main()
{
 int i,j,n,a[100][100];
 printf("Please enter n:");
 scanf("%d",&n);
 for (i=1;i<=n;i++)
 {
  for (j=1;j<=i;j++)
  if (i==j || j==1) a[i][j]=1;//如果是第一列上的数和主对角线上的数为1
  else a[i][j]=a[i-1][j-1]+a[i-1][j];
 }
 for (i=1;i<=n;i++)
 {
  for (j=1;j<=i;j++)
  printf("%d ",a[i][j]);
  printf("\n");
 }
 return 0;
}
