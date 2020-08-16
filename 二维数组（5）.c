#include<stdio.h>
main()
{int i,j,flag,k,n,col,row;
int a[6][6];
printf("Please enter n:");
scanf("%d",&n);
printf("Please enter intengers:");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);

for(i=0;i<n;i++){
	flag=1;col=0;
	for(j=0;j<n;j++)
		if(a[i][col]<a[i][j])
			col=j; //同一行相比，找该行最大值
		for(k=0;k<n;k++)
			if(a[k][col]<a[i][col])//如果该行最大值在与之相对应的一列中不是最小值
			{flag=0;break;}//则提前跳出循环
			if(flag){row=i;break;
			}
}
if(flag){
printf("鞍点为a[%d][%d]=%d\n",row,col,a[row][col]);
}
else printf("NO\n");
return 0;
}
