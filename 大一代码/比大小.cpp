#include<stdio.h>
int main()
{
	int a,b,c,t;
	printf("请输入三个数字，我们将比大小\n");
	scanf("%d %d %d",&a,&b,&c); 
	if(a<b)
	{t=a;a=b,b=t;}
	if(b<c)
	{t=b;b=c;c=t;}
	if(a<b)
	{t=a;a=b;b=t;}
	 printf("从大到小分别是:%d %d %d\n",a,b,c);
	return 0;
 } 

