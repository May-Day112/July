#include<stdio.h>
main()
{int i,count;
char str[80];swwwwwwwsw4
printf("Please enter string:");
i=0;
while((str[i]=getchar())!='\n')
i++;
str[i]='\0';//将结束符'0'存入数组
count=0;
for(i=0;str[i]!='0';i++)
if(str[i]>='0'&&str[i]<='9')
count++;
printf("该字符串中数字字符的个数是:%d\n",count);
return 0;
}
