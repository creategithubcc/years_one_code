#include<stdio.h>
int main(void)
{
	int s,n=1,t=0;
	do
	{
	printf("输入第%d个成绩",n);
	scanf("%d",&s);
	if(s<0||s>100)
	printf("成绩无效请重新输入\n");
	else
	{
		printf("录入成功\n");
		t=t+s;
		n++;
	}
	}while(n<=3);
	printf("n=%d,%d\n",n,t/(n-1));
	return 0;
}
