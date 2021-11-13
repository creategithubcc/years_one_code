#include<stdio.h>
int main()
{
	int i,j,n;
	printf("请直接输入n的个数=\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
{
	for(j=1;j<=n-i;j++)
	printf(" ");
	printf("*");
	for(j=1;j<=2*i-3;j++)
	printf("*");
	if(i!=1)
	printf("*");
	printf("\n");
	 
}
	return 0;
 } 
