#include<stdio.h>
int main()
{
	int i,count=0,x,sum=0;
	for(i=1;i<=10;i++)
{
	printf("输入：");
	scanf("%d",&x);
	if(x<=0)
	continue;
	count ++;
	sum+=x;
}
if(count)
printf("正数个数：%d,平均数：%.2f",count,1.0*sum/count);
else printf("正数个数:0,平均数:0");
}
