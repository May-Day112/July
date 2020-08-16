#include<stdio.h>
main()
{int i,k;
char line[80];
printf("Please enter string:");
k=0;
while((line[k]=getchar())!='\n')
k++;    //当输入字符不是回车符时，k的个数逐渐增加
line[k]='\0'; //line[0]为该字符串的首字符，所以line[k]此时应该为字符串结束符号
i=0;    //i是字符串首字符的下标   
k=k-1;  //k是字符串末位字符的下标
while(i<k)
{if(line[i]!=line[k]) 
break; 
i++;  //i和k两个下标同时加减，同时向字符串中端靠近，判断对应字符是否相等
k--;
}
if(i>=k)
printf("该字符串是回文\n");
else printf("该字符串不是回文\n");
return 0;
}
