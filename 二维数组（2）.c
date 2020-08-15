#include<stdio.h>
main()
{int i,j,t,n;
int a[6][6];  //因为n<=6，所以取上限
printf("Please enter n:");
scanf("%d",&n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
a[i][j]=i*n+j+1;//给二维数组赋值
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(i<=j){  //只便历上三角
	t=a[i][j];
	a[i][j]=a[j][i];
  a[j][i]=t;
}
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
printf("%6d",a[i][j]);
printf("\n");
}
return 0;
}
