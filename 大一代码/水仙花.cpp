#include<stdio.h>
int main()
{
	int n=100;
	for(n=100;n<1000;n++)
	{int g=n%10;
	int s=n/10%10;
	int b=n/100;
	if(n==g*g*g+s*s*s+b*b*b)
	printf("%d  ",n);
	}
	return 0;
 } 
