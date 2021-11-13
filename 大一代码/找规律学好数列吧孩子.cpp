#include<stdio.h>
int main()
{
	int n,t,a1=1,a2=1,s=0;
	scanf("%d",&n);
	printf("%10d %10d ",a1,a2);
	for(int i=3;i<n;i++)
	{
		t=a1+a2;
		printf("%10d",t);
		s=s+t;
		a1=a2;
		a2=t;
	}
	printf("s=%d \n",s);
	return 0; 
}
