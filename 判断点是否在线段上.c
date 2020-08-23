#include<stdio.h>
main()
{int x1,x2,x3,y1,y2,y3;
printf("确定线段的两点为:");
scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
printf("输入第三个点P:");
scanf("%d %d",&x3,&y3);
if(x1==x2&&x1==x3||y1==y2&&y1==y3)//判断横纵坐标是否相等，若相等则点在线段上
printf("P点在该线段上\n");
else if((y1-y2)/(x1-x2)==(y1-y3)/(x1-x3))//若横纵坐标不相等，判断斜率是否相等
printf("P点在该线段上\n");
else printf("P点不在该线段上\n");
return 0;
}
