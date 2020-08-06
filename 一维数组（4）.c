#include<stdio.h>
main()
{int a[10];
int i,t,n,index;
printf("Please enter n:");
scanf("%d",&n);
printf("Please enter %d numbers:",n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
index=0;
for(i=1;i<n;i++)
{if(a[i]<a[index])
{index=i;
}
}
printf("最小值为:%d\n",a[index]);
printf("对应的下标为:%d\n",index);
t=a[index];
a[index]=a[0];
a[0]=t;
printf("交换后的n个数输出为：");
for(i=0;i<n;i++)
{printf("%4d",a[i]);
}
return 0;
}
