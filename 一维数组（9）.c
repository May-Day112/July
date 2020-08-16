#include<stdio.h>
main()
{int i,k;
char head[10],str[10];
long number;
printf("Please enter string:");
i=0;
while((str[i]=getchar())!='#')
i++;
str[i]='\0';//将字符串存进数组
k=0;
for(i=0;str[i]!='\0';i++)
if(str[i]>='0'&&str[i]<='9'||str[i]>='A'&&str[i]<='F'||str[i]>='a'&&str[i]<='f')
{head[k]=str[i];
k++;}
head[k]='\0';//重新将十六进制字符存进一个新的数组
printf("New string is:");
for(i=0;head[i]!='\0';i++)
putchar(head[i]);
printf("\n");//输出新的字符串
number=0;//转换为十进制数，先清0
for(i=0;head[i]!='\0';i++)
{if(head[i]>='0'&&head[i]<='9')
number=number*16+head[i]-'0';
else if(head[i]>='A'&&head[i]<='F')
number=number*16+head[i]-'A'+10;
else if(head[i]>='a'&&head[i]<='f')
number=number*16+head[i]-'a'+10; 
}
printf("十进制输出为:%ld\n",number);
return 0;
}
