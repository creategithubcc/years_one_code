#include<stdio.h>
int main()
{
	int i,j,a[10][10];
	for(i=0;i<=10;i++)
	for(j=0;j<=10;j++)
	if(i<=j)
	a[i][j]=1;
	else
	a[i][j]=i-j+1;
	printf("%2d",a[i][j]);
	printf("\n");
	
 } 
