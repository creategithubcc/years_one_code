#include<stdio.h>
#include<string.h>
int main()
{
	int i,sum=13,x,y;
	int z[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("请输入年份以及那一年元旦星期几\n");
	scanf("%d %d",&x,&y);
	if((x%4==0&&x%100!=0)||(x%400==0))
	{
	z[1]=29;
	}
	for(i=0;i<=11;i++)
	{
 	   if((sum%7+y==6)||(sum%7+y==13)) 
		printf("%d/%d/13\n",x,i+1);
		sum+=z[i];
	}
}
