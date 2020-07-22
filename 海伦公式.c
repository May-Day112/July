#include<stdio.h>
#include<math.h>
main()
{double a,b,c,s,p;
printf("Please enter a,b,c:");
scanf("%lf%lf%lf",&a,&b,&c);
p=(a+b+c)*0.5;
if((a+b)>c&&(b+c)>a&&(a+c>b)) //三角形两边之和大于第三边
{s=sqrt(p*(p-a)*(p-b)*(p-c));
printf("三角形面积为s=%lf\n",s);
}
else printf("不能构成三角形\n");
return 0;
}
