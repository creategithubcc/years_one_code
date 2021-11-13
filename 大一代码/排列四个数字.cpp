#include<stdio.h>
int main()
{
	int i,j,k,l,n=0,m=0;
	for(i=1;i<10;i++)
	for(j=1;j<10;j++)
	for(k=1;k<10;k++)
	for(l=1;l<10;l++)
{
	m++;
	if(i==j||i==k||i==l||j==k||j==l||k==l)
	continue;
	if(i+j+k+l!=12)
	continue;
	n++;
	printf("{%d,%d,%d,%d}",i,j,k,l);
	if(n%5==0)printf("\n");
}
printf("\n%d\n%d\n",n,m);
return 0;
}
