#include<stdio.h>
main()
{int day_of_year(int year,int month,int day);
int year,month,day;
int days;
 printf("Please enter year:");
 scanf("%d",&year);
 printf("Please enter month:");
 scanf("%d",&month);
 printf("Please enter day:");
scanf("%d",&day);
days=day_of_year(year,month,day);
 printf("%d年%d月%d日对应的是该年的第%d天\n",year,month,day,days);
 return 0;
}
int day_of_year(int year,int month,int day)
{int k,leap;
int cal[2][13]={
	{0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31},//初始化二维数组
};
leap=(year%4==0&&year%100!=0||year%400==0);//判断是否为闰年
for(k=1;k<month;k++)
day=day+cal[leap][k];//计算天数
return day;
}
