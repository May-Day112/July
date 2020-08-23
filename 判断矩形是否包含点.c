#include <stdio.h>
void main()
{int a,b,c,d,m,n,t;
printf("Please enter 点P坐标：");
scanf("%d %d",&m,&n);
printf("Please 确定矩形:");
scanf("%d %d %d %d",&a,&b,&c,&d);//分别表示矩形某一条对角线上的两个顶点，前两个整数表示其中一个顶点的横坐标和纵坐标；后两个整数表示另一个顶点的横坐标和纵坐标
if(a>c) {t=a;a=c;c=t;}
if(b>d) {t=b;b=d;d=t;}
if(m>=a&&m<=c&&n>=b&&n<=d)
printf("YES\n");
else printf("NO\n");
}
