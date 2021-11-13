#include<stdio.h>
int max(int a,int b)
{
	int t;
	if(a>b)
	t=a;
	else
	t=b;
	return t;
}
int main()
{
	int x,y,m;
	scanf("%d %d",&x,&y);
	m=max(x,y);
	printf("max=%d\n",m);
}

