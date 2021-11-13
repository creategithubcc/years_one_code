#include<stdio.h>
int main()
{
	int count,num,total;
	count=0;total=0;
	while(count<10)
	{count ++;
	printf("Enter the NO.%d=",count);
	scanf("%d",&num);
	total +=num;
	}
	printf("平均下来等于%d\n",total/10);
}
