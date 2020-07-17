#include<stdio.h>
int fact(int number)
{if(number<=1)
return 1;
else return(fact(number-1)*number);//求阶乘返回主函数
}

 main()
{int num[100];
char s[100];
int i=0,j=0,k=0,count=0;
char cp;
int sum=0;
while(scanf("%c",&cp)){
	if(cp=='\n') break;
	else {s[count]=cp;
	count++;        //计算一共有几位数
	}
}
printf("一共有%d位数\n",count);
for(i=0;i<count;i++){
	printf("%c\n",s[i]);    //将数一位一位输出
	for(j=i+1;j<count;j++)
	{if(s[i]>s[j]){
		k++;
	}
	}printf("大于后面的%d位数\n",k);
	num[i]=k;
	k=0;//将k再次命为0，方便再次循环重新计算k
}
for(j=count-1;j>=0;j--){
	sum=sum+fact(j)*num[k];	//上面一次循环结束时已经将k命为0,此时从num[0]开始参与循环
	k++;
}
printf("这个全排列排在第%d位\n",sum+1);
return 0;
}
