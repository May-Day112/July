#include<stdio.h>
main()
{int i,res;
int count[9];//各栏目编号对应数组下标，不使用count[0]，方便计数
for(i=0;i<=8;i++){
	count[i]=0;//初始定于各栏目票数为零
}
for(i=1;i<=1000;i++)
{printf("Please enter res:");
scanf("%d",&res);
if(res>=1&&res<=8)
count[res]++; //给相应的栏目票数加一
else printf("无效投票：%d\n",res);//清除无效票数
}
printf("最后投票结果为：\n");
for(i=1;i<=8;i++)
printf("栏目%d得票数为:%d\n",i,count[i]);
return 0;
}
