#include<stdio.h>
main()
{int x1,x2,x3,x4,y1,y2,y3,y4;
printf("输入确定第一条线段的两点:")
scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
printf("输入确定第二条线段的两点:");
scanf("%d %d %d %d",&x3,&y3,&x4,&y4);
if(x1==x2==x3==x4||y1==y2==y3==y4)//首先排除线段重合的情况
printf("线段重合\n");
else if((y1-y2)/(x1-x2)==(y3-y4)/(x3-x4))//排除线段平行的情况
printf("线段平行\n");
else if(x1==x3&&y1==y3||x2==x3&&y2==y3||x1==x4&&y1==y4||x2==x4&&y2==y4)//判断两线段是否有相同的端点
printf("线段相交\n");
else if()//此处需要想出两条线段呈“X”相交的条件，暂时实在还没有想到最完美最符合的条件
else printf（"线段不相交\n"）;
return 0;
}
