#include<stdio.h>
main()
{double x1,x2,x3,y1,y2,y3,z1,z2,z3,j;
printf("Please enter x1,x2,x3,y1,y2,y3,z1,z2,z3:");
scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&x2,&x3,&y1,&y2,&y3,&z1,&z2,&z3);
if(x1==0&&x2==0&&x3==0&&y1==0&&y2==0&&y3==0&&z1==0&&z2==0&&z3==0)
printf("三点皆为原点.\n");
else{
j=(x2-x1)*(y3-y1)-(x3-x1)*(y2-y1);
if(j>0) printf("三点顺序为逆时针.\n");
else printf("三点顺序为顺时针.\n");}
return 0;
}
