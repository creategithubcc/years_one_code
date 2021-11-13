#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
int main()
{
	int r = 0;
	float c = 0,s = 0;
	printf("输入任意一个数字，按回车后将算出以该数字为半径的圆的周长与面积\n");
	scanf("%d",&r);
	c = 2*PI*r;
	s = PI*r*r;
	printf("c=%6.2f,s=%6.2f\n",c,s);
	return 0;
 } 
