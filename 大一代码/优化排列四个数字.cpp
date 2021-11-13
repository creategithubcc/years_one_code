#include<stdio.h>
int main()
{
	int i,j,k,l,n=0,m=0;
	for(i=1;i<7;i++)
	{
	for(j=1;j<7;j++)
	{
if(i==j)
continue;
for(k=1;k<7;k++)
{
	m++;
	l=12-i-j-k;
	if(i==k||j==k||l==i||l==j||l==k)
	continue;
	if(l<=0||l>=7)
	continue;
	n++;
	printf("{%d,%d,%d,%d}",i,j,k,l);
	if(n%5==0)printf("\n");
}
}} 
printf("\n%d\n%d\n",n,m);
return 0;
}
