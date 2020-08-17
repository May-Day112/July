#include<stdio.h>
main()
{int i,j,n,flag;
int a[6][6];
printf("Please enetr n:");
scanf("%d",&n);
printf("Please enter array:");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
flag=1;
for(i=0;i<n;i++)
for(j=0;j<i;j++)//遍历下三角
if(a[i][j]!=0)//如果下三角有一个数字不为0，flag不成立
flag=0;
if(flag)
printf("YES\n");
else printf("NO\n");
return 0;
}
