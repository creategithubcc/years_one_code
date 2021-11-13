#include<stdio.h>
float fact(int n)
{
	float f=0;
	if(n<0)
	printf("n<0,error!");
	else if(n==0||n==1)
			f=1;
		else
			f=fact(n-1)*n;
			return f;
}
int main()
{
	int n;
	float y;
	printf("\ninput n:");
	scanf("%d",&n);
	y=fact(n);
	printf("%d!=%-10.0f\n",n,y);
	return 0;
}
