#include<stdio.h>
int main()
{
	int i,count=0,x,sum=0;
	for(i=1;i<=10;i++)
{
	printf("���룺");
	scanf("%d",&x);
	if(x<=0)
	continue;
	count ++;
	sum+=x;
}
if(count)
printf("����������%d,ƽ������%.2f",count,1.0*sum/count);
else printf("��������:0,ƽ����:0");
}
