#include<stdio.h>
main()
{int a[6][6];
int i,j,n,sum;
printf("Please enter n:");
scanf("%d",&n);
printf("Please enter numbers:");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
sum=0;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(i!=n-1&&j!=n-1&&i+j!=n-1)
sum=sum+a[i][j];
printf("矩阵运算的结果为：%d",sum);
return 0;
}
