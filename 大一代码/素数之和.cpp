#include<stdio.h>
int isprime(int n)
{	int i;
	for(i=2;i<=n/2;i++)
	if(n%i==0)
	return 0;
	return 1;
 } 
 int main()
 {	int i,num;
 	scanf("%d",&num);
 	for(i=2;i<=num/2;i++)
 	if(isprime(i)&&isprime(num-i))
 	printf("%d=%d+%d\n",num,i,num-i);
 }
