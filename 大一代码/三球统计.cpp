#include<stdio.h>
int main()
{
int i,j,o=0,n,m;
printf("���������Ͱ���ĸ���\n");
scanf("%d %d",&n,&m); 
for(i=0;i<=3;i++)
{
	for(j=0;j<=3;j++)
	{
		if((8-i-j)<=6)
		{
			printf("������%d",i);
			printf("������%d",j);
			printf("������%d\n",8-i-j);
			o=o+1;
		}
	}
}printf("�ܹ���%d",o);}
