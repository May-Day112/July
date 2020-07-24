#include<stdio.h>
#include<stdlib.h>
#define N 5
main()
{int number[N];
int i,t;
for(i=0;i<N;i++)
{printf("Please enter No.%d个数:",i+1);
 scanf("%d",&number[i]);    //首先将数放进数组中
}
t=number[N-1]; //用中间变量保存第五个数字
for(i=N;i>0;i--)
{number[i]=number[i-1];}  //将数字往后移动一个位置
number[0]=t;  //中间变量赋值给第一个数字
printf("最后打印结果为：\n");
for(i=0;i<N;i++)
{printf("%-8d",number[i]); //按题意将数字输出
}
return 0;
}

结果展示：
Please enter No.1个数：1
Please enter No.2个数：2
Please enter No.3个数：3
Please enter No.4个数：4
Please enter No.5个数：5
最后打印结果为：
5       1       2       3       4
