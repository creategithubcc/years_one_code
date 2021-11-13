#include<stdio.h>

int main()

{
int a[20]={0,1},i;
for(i=2;i<20;i++)
{
	a[i]=a[i-2]+a[i-1];

 } 
 for(i=0;i<20;i++)
{
printf("%d\n",a[i]);
}
} 
