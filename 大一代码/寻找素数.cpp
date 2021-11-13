#include<stdio.h>
int main()
{
	int n,i,a=1;
	scanf("%d",&n);
	for(;n>0;n--) 
	{for(i=2;i<n;i++)
	{if(n%i==0)
	break;
	if(i==n-1)
	{printf("最大素数是%d.\n",n);
	a=0;
	break;
	}
	}
	if(a==0)
	break;
	}
}
