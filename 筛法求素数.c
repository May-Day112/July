#define N 200
#include<stdio.h>
main()
{int i,j;
int a[N];
for(i=0;i<200;i++)
{a[i]=i+1;}        //对数组赋初值为1-200
a[0]=0;            //由于1不是素数，首先要排除掉1，将a[0]命为0
for(i=1;i<N-1;i++){
	for(j=i+1;j<N;j++){
		if(a[i]!=0&&a[j]!=0) //当2已经除过后面的数以后，必然有数已经命为0，为了防止已经命为0的数再作为分母，从而要确保a[j]不为0，同时排除a[i]为0的数，使得循环更简洁
        if(a[j]%a[i]==0){
	a[j]=0;
}//从2开始循环，能被整除的数均不是素数，被命为0
}
}
for(i=0;i<200;i++)
{if(a[i]!=0)
printf("素数为%d\n",a[i]); 
}
return 0;
}
