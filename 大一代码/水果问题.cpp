#include<stdio.h>
int main()
{
	int x,y,q;
	for(x=1;x<100;x++)
{
	for(y=1;y<100-x-1;y++)
	{
		if(6*x+3*y+2*(100-x-y)==300)
		{
			printf("%d %d %d\n",x,y,100-x-y);
			q++;
		}
	}
}printf("%d",q);
}
