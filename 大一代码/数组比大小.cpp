#include<stdio.h>
int main()
{
	int i,j,t,a[8]={1,5,7,2,3,8,4,1};
	for(i=0;i<9;i++)
	{
		for(j=0;j<8;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			printf("%d\n",a[j]);
		}
		printf("----------------\n");
	}
	/*for(i=0;
	i<10;i++)
	{
		printf("  %d\n",a[i]);
	}*/
}
