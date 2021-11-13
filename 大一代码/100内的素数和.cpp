#include<stdio.h>
int main()
{
	int i;
	int j;
	int flag = 1;
	for(i = 2;i <= 100;i++)
	{
		for(j = 2;j <= i / 2;j++)
		{
			if(i % j ==0)
			{
				flag = 0;
				break;
			}
		}
		if(flag == 1)
		{
			printf("%d\n",i);
		}
		flag = 1;
	}
	return 0;
}
