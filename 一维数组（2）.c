#include<stdio.h>
main()
{int i;
int f[20]={1,1}; //初始化f[0],f[1]
for(i=2;i<20;i++)
{f[i]=f[i-1]+f[i-2];
}
for(i=0;i<20;i++)
{printf("%6d",f[i]);
if((i+1)%5==0)
printf("\n");//每输出5个数就换行
}
return 0;
}
