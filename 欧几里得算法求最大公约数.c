#include<stdio.h>
main()
{int a,b,r;
printf("Enter a,b(a>b):");
scanf("%d%d",&a,&b);
r=a%b;
while(r!=0)
{a=b;
b=r;
r=a%b;
}
printf("最大公约数为%d",b);
return 0;
}
