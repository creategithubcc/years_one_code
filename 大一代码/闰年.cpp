#include<stdio.h>
#include<math.h>
int main(void)
{
int year=2019;
while(year<2500)
{
if(year%4==0&&year%100||year%400==0)
	printf("%d,¿µºë×îË§!\n",year); 
	year++;

}

}
