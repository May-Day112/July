#include<stdio.h>
main()
{int n,i,t,index,k;
int a[10];
printf("Please enter n:");
scanf("%d",&n);
printf("Please enter n numbers:");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(k=0;k<n-1;k++)
{index=k;
for(i=k+1;i<n;i++)
if(a[i]<a[index]) index=i; //寻找最小值所在下标
t=a[index];
a[index]=a[k];
a[k]=t;    //最小元素与下标为k的元素交换位置
}
printf("从小到大依次输出为:");
for(i=0;i<n;i++)
{printf("%4d",a[i]);
}
return 0;
}
