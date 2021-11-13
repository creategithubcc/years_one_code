#include<stdio.h>
int main()
{
int i,j,o=0,n,m;
printf("请输入红球和白球的个数\n");
scanf("%d %d",&n,&m); 
for(i=0;i<=3;i++)
{
	for(j=0;j<=3;j++)
	{
		if((8-i-j)<=6)
		{
			printf("红球是%d",i);
			printf("黄球是%d",j);
			printf("黑球是%d\n",8-i-j);
			o=o+1;
		}
	}
}printf("总共有%d",o);}
