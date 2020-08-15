#include<stdio.h>
main()
{int i,j,row,col;
int a[3][4];
printf("Please enter 12 numbers:");
for(i=0;i<3;i++)
for(j=0;j<4;j++)
scanf("%d",&a[i][j]);
                        //回显，检测输入数据正确与否
for(i=0;i<3;i++){
for(j=0;j<4;j++)
printf("%6d",a[i][j]);    
printf("\n");}

row=col=0;          //首先假设a[0][0]是最大数值
for(i=0;i<3;i++)
for(j=0;j<4;j++)
if(a[i][j]>a[row][col]){
row=i; 
col=j;       //交换
}
printf("max=a[%d][%d]=%d\n",row,col,a[row][col]);
return 0;
}
