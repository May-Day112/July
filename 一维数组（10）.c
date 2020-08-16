#include<stdio.h>
main()
{
	int n,i,number,max;
	int count[10]={0,0,0,0,0,0,0,0,0,0};
	printf("Please enter n:");
	scanf("%d",&n);
	printf("Please enter %d integers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&number);
		if(number==0)
			count[0]++;
		else if(number<0)
			number=-number;
		while(number>0)
		{
			count[number%10]++;
			number=number/10;
		}
	}
	max=count[0];
	for(i=1;i<10;i++)
	{
		if(count[i]>max)
			max=count[i];
	}
	for(i=0;i<10;i++)
	{
		if(count[i]==max)//可能出现两个数字出现次数一样多的情况
		{
			printf("出现次数的数字为%d，出现了%d次",i,max);
			printf("\n");
		}
	}
	return 0;
} 
