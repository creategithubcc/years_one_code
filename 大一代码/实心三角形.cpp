#include<stdio.h>
int main()
{
	int i,j,s;
	scanf("%d",&i);
	for(j=1;j<=i;j++)
	{
		for(s=1;s<=i-j;s++)
			printf(" ");
		for(s=1;s<=2*j-1;s++)
			printf("*");
			printf("\n");
	
	}
}
