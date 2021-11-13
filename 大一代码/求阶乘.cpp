#include<stdio.h>
int main()
{
	int a,b,c;
	int f(int);
	for(a=1;a<=9;a++)
	for(b=0;b<=9;b++)
	for(c=0;c<=9;c++)
	if(f(a)+f(b)+f(c)==a*100+b*10+c)
	printf("%d%d%d",a,b,c);
	return 0; 
 } 
 int f(int n)
{
	int i,t=1;
	for(i=2;i<=n;i++)
	t=t*i;
	return(t); 
}
