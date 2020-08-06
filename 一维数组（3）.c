#include<stdio.h>
main()
{int i,flag,X;
int a[5];
printf("Please enter 5 numbers:");
for(i=0;i<5;i++)
{scanf("%d",&a[i]);
}
printf("Enter X:");
scanf("%d",&X);
flag=0;//先假设在该数组中找不到X，置flag=0
for(i=0;i<5;i++)
{if(a[i]==X){//如果找到了对应的数
printf("Index为：%d\n",i);//输出相应相应最小下标
flag=1;//置flag为1，表明在数组中已经找到了该数
break;}//跳出循环
}
if(flag==0)
printf("Not Found.\n");
return 0;
}
